#include "ipc_thread.h"
#include <QDebug>
#include <QDateTime>

extern ActionHelp *actionHelpPtr;

// ----------------------------------------------------------------------------
IPC_Thread::IPC_Thread(QObject *parent) :
    QObject(parent),
    shf(SHF_KEY)
{
    bkTimerThread.setObjectName("SD IPC Thread");
    bkTimer.setInterval(10);
    bkTimer.moveToThread(&bkTimerThread);

    connect(&bkTimer,       SIGNAL(timeout()),  this,     SLOT(onBkTimerTimeout()), Qt::DirectConnection);
    connect(&bkTimerThread, SIGNAL(started()),  &bkTimer, SLOT(start()));
    connect(&bkTimerThread, SIGNAL(finished()), &bkTimer, SLOT(stop()));
}

IPC_Thread::~IPC_Thread()
{
    onNotify(ShmId_StreamDeck, QStringList("obs_terminated"));

    // make sure all cmd sent before destroy class.
    if(sendCmdList.count() > 0)
    {
        for (int i = 0 ; i < 15; i++)
        {
            qDebug() << __FUNCTION__ << QString("waiting for send all cmd, elapsed %1 ms").arg(i*100);
            QThread::msleep(100);
        }
    }

    bkTimerThread.quit();
    bkTimerThread.wait();
}

void IPC_Thread::start()
{
    bkTimerThread.start();
}

void IPC_Thread::stop()
{
    bkTimerThread.quit();
}

void IPC_Thread::fillDataBuf(QByteArray &buf, const QStringList &list, const QString appendStr)
{
    QDataStream out(&buf, QIODevice::WriteOnly);

    quint16 cnt = list.count();
    out << cnt;
    for (int i=0; i<cnt; i++)
        out << list.at(i);

    if (!appendStr.isEmpty())
        out << appendStr;
}

void IPC_Thread::fillDataBuf(QByteArray &buf, const QString &errStr, const QList<SourceInfo> &list)
{
    QDataStream out(&buf, QIODevice::WriteOnly);

    out << errStr;

    quint16 cnt = list.count();
    out << cnt;

    for (int i=0; i<cnt; i++) {
        out << QString(list.at(i).sceneName.c_str());
        out << QString(list.at(i).name.c_str());
		out << QString(list.at(i).idStr.c_str());
		out << QString::number(list.at(i).sceneItemId);
    }
}

void IPC_Thread::fillDataBuf(QByteArray &buf, const QList<SceneInfo> &list)
{
	QDataStream out(&buf, QIODevice::WriteOnly);

	quint16 cnt = list.count();
	out << cnt;

	for (int i = 0; i<cnt; i++) {
		out << QString(list.at(i).name.c_str());
		out << bool(list.at(i).isSelected);
	}
}

// ----------------------------------------------------------------------------
// Slot functions
// ----------------------------------------------------------------------------
#define CHK_IN_RANGE(max, min, t)  (t = (t>max?max : t<min?min : t))

void IPC_Thread::onBkTimerTimeout()
{
    bool resetTimerInterval = false;

	static int counter = -1;
	static double idleStepCount = 1.0;
	counter++;

	if (counter % (int)idleStepCount != 0)
		return;

    // Close if the file doesn't exist
    if(shf.closeIfNeeded())
    {
        qDebug() << __FUNCTION__ << "Closed shf";
    }

    if (!shf.isAttached())
    {
        qDebug() << __FUNCTION__ << "shf is not attached";

        if(!shf.open())
        {
            qDebug() << __FUNCTION__ << "shf open fail!!!";
            return;
        }
    }

//    qDebug() << __FUNCTION__ << "t:" << t;

    // check shf event
    // prefetch data from shared memory
    ShfPayload payload;
    memcpy(&payload, shf.data(), sizeof(ShfPayload));

    if ((payload.receviedId == ShmId_OBS) && (shf.lock()))
    {
        QByteArray cmdData;
        getPayloadAndCmdData((char*)shf.data(), payload, cmdData);

        // check cmd time stamp
        quint64 curTm = QDateTime::currentDateTime().toMSecsSinceEpoch();
        if ((curTm-payload.timeStamp)>=payload.expiredMs)
        {
            qDebug() << __FUNCTION__ << "skip expired cmd, form id: " << payload.senderId;
            IPC_CMD cmd = makeIpcCmd(ShmId_Invalid, QByteArray(), SDIPCCMD_Invalid);
            sendCmd(cmd);
        }
        else
        {
            QDataStream ds(&cmdData, QIODevice::ReadOnly);
            cmdHandle(payload, (SDIPCCmd)payload.cmd, ds);
        }

        shf.unlock();
        resetTimerInterval = true;
    }

    // send cmd
#if 1
    quint64 curTm = QDateTime::currentDateTime().toMSecsSinceEpoch();
    if ((payload.cmd != SDIPCCMD_Invalid) && (curTm-payload.timeStamp)>=payload.expiredMs)
    {
        qDebug() << __FUNCTION__ << "skip expired cmd, form id: " << payload.senderId;
        IPC_CMD cmd = makeIpcCmd(ShmId_Invalid, QByteArray(), SDIPCCMD_Invalid);
        sendCmd(cmd);
        return;

    }
    else if (payload.receviedId != ShmId_Invalid)
    {
        return;
    }
#endif


    if (sendCmdList.count())
    {
        cmdListMutex.lock();
        IPC_CMD cmd = sendCmdList.first();

        if (sendCmd(cmd))
        {
            sendCmdList.removeFirst();
            resetTimerInterval = true;
        }
        cmdListMutex.unlock();
    }

	if (resetTimerInterval)
	{
		resetTimerInterval = false;
		(void)resetTimerInterval; // Fix warning in the Clang Static Analyzer caused by the variable being never used
		idleStepCount = 1.0;
	}
	else
	{
		idleStepCount = idleStepCount + 0.02 < 10.0 ? idleStepCount + 0.02 : 10.0;
	}
}

IPC_CMD IPC_Thread::makeIpcCmd(ShmID recId, const QByteArray &buf, const quint64 cmdId, quint64 expiredMs)
{
    IPC_CMD cmd;
    cmd.payload.receviedId      = recId;
    cmd.payload.totalSize       = buf.size();
    cmd.payload.senderId        = ShmId_OBS;
    cmd.payload.senderThreadPtr = (quintptr)QThread::currentThread();
    cmd.payload.timeStamp       = QDateTime::currentDateTime().toMSecsSinceEpoch();
    cmd.payload.expiredMs       = expiredMs;
    cmd.payload.cmd             = cmdId;
    cmd.dataBuf                 = buf;

    return cmd;
}

void IPC_Thread::sendCmdToList(ShmID recId, const QByteArray &buf, const quint64 cmdId, quint64 expiredMs)
{
    IPC_CMD cmd = makeIpcCmd(recId, buf, cmdId, expiredMs);
    sendCmdToList(cmd);
}

void IPC_Thread::sendCmdToList(IPC_CMD cmd)
{
    cmdListMutex.lock();
    sendCmdList.append(cmd);
    cmdListMutex.unlock();
}

bool IPC_Thread::sendCmd(const IPC_CMD &cmd)
{
    if (!shf.attach())
        return false;

    // TODO should implement non-blocking trylock prevent deadlock
    bool unlock = (!shf.isLocked());
    if (!shf.isLocked() && !shf.lock()) {
        qDebug() << __FUNCTION__ << QThread::currentThread();
        return false;
    }

    // copy payload
    char* shfPtr = (char*)shf.data();
    memcpy(shfPtr, &cmd.payload, sizeof(ShfPayload));
    // copy data
    if (cmd.dataBuf.size())
        memcpy(shfPtr+sizeof(ShfPayload), cmd.dataBuf.data(), cmd.dataBuf.size());

    if (unlock)
        shf.unlock();

    qDebug() << __FUNCTION__ << QThread::currentThread() << cmd.payload.cmd;

    return true;
}

void IPC_Thread::onNotify(ShmID recId, QStringList msgList)
{
    QByteArray buf;

    qDebug() << __FUNCTION__ << msgList << msgList.count();
    fillDataBuf(buf, msgList);

    sendCmdToList(recId, buf, SDIPCCMD_Notify);
}

// ----------------------------------------------------------------------------
// Private functions
// ----------------------------------------------------------------------------
void IPC_Thread::getPayloadAndCmdData(const char *shfPtr, ShfPayload &payload, QByteArray &cmdData)
{
    // read data from shared memory ptr
    memcpy(&payload, shfPtr, sizeof(ShfPayload));

    const char* dataPtr = (shfPtr + sizeof(ShfPayload));
    cmdData = QByteArray(dataPtr, (int)payload.totalSize);
}


void IPC_Thread::cmdHandle(const ShfPayload &payload, SDIPCCmd cmd, QDataStream &ds)
{
    Q_UNUSED(payload)

    qDebug() << __FUNCTION__ << QThread::currentThread()
             << "handle cmd: " << cmd
             << "sendId: "     << payload.senderId
             << "receviedId "  << payload.receviedId;

    switch (cmd) {
    case SDIPCCMD_Req_OBS_SCList:
    {
        QMetaObject::invokeMethod(actionHelpPtr, "reqUpdateSCList");
        break;
    }
    case SDIPCCMD_Req_OBS_ScenesList:
    {
        QString scName;
        ds >> scName;
        QMetaObject::invokeMethod(actionHelpPtr, "reqUpdateSceneList", Q_ARG(QString, scName));
        break;
    }
    case SDIPCCMD_Req_OBS_SourceList:
    {
        QString inCollectionName, inSceneName;
        ds >> inCollectionName >> inSceneName;
        QMetaObject::invokeMethod(actionHelpPtr, "reqUpdateSourcesList", Q_ARG(QString, inCollectionName), Q_ARG(QString, inSceneName));
        break;
    }
    case SDIPCCMD_Req_OBS_SourceListOfAll:
    {
        QString scName;
        ds >> scName;
        QMetaObject::invokeMethod(actionHelpPtr, "reqUpdateSourcesListOfAll", Q_ARG(QString, scName));
        break;
    }
    case SDIPCCMD_Req_OBS_CurrentCollectionAndSceneName:
    {
        QMetaObject::invokeMethod(actionHelpPtr, "reqCurrentCollectionAndSceneName");
        break;
    }
    case SDIPCCMD_Req_OBS_SourceState:
    {
        bool isMixerSrc;
        QString scName, sceneName, sourceName, sourceIdStr;
		int64_t sceneItemId;

        ds >> isMixerSrc >> scName >> sceneName >> sourceName >> sourceIdStr;
		ds >> sceneItemId;

        QMetaObject::invokeMethod(actionHelpPtr, "reqSourcesState", Q_ARG(bool, isMixerSrc),
                                                                    Q_ARG(QString, scName),
                                                                    Q_ARG(QString, sceneName),
                                                                    Q_ARG(QString, sourceName),
                                                                    Q_ARG(QString, sourceIdStr),
																	Q_ARG(int, (int) sceneItemId));
        break;
    }
    case SDIPCCMD_Select_OBS_SceneCollection:
    {
        QString scName;
        ds >> scName;

        QMetaObject::invokeMethod(actionHelpPtr, "selectSceneCollection", Q_ARG(QString, scName));
        break;
    }
    case SDIPCCMD_Select_OBS_Scene:
    {
        QString scName, sceneName;
        ds >> scName >> sceneName;

        QMetaObject::invokeMethod(actionHelpPtr, "reqSelectScene", Q_ARG(QString, scName), Q_ARG(QString, sceneName));
        break;
    }
    case SDIPCCMD_Toggle_OBS_Source:
    {
        bool isMixerSrc;
        QString scName, sceneName, srcName, srcIdStr;
		int64_t sceneItemId;

        ds >> isMixerSrc >> scName >> sceneName >> srcName >> srcIdStr;
		ds >> sceneItemId;

        QMetaObject::invokeMethod(actionHelpPtr, "reqToggleSource",
                                                 Q_ARG(bool, isMixerSrc),
                                                 Q_ARG(QString, scName),
                                                 Q_ARG(QString, sceneName),
                                                 Q_ARG(QString, srcName),
												 Q_ARG(QString, srcIdStr),
                                                 Q_ARG(int, (int) sceneItemId));
        break;
    }

	case SDIPCCMD_Toggle_OBS_Record:
	{
		QMetaObject::invokeMethod(actionHelpPtr, "reqToggleRecord");
		break;
	}

	case SDIPCCMD_Toggle_OBS_Stream:
	{
		QMetaObject::invokeMethod(actionHelpPtr, "reqToggleStream");
		break;
	}

    case SDIPCCMD_Req_VerInfo:
    case SDIPCCMD_ShowWindow:
    {
        qDebug() << "Err: unsupport cmd!" << cmd;
        break;
    }
    default:
    {
        qDebug() << "Err: unknow cmd: " << cmd;
        break;
    }
    }

    IPC_CMD ipcCmd = makeIpcCmd(ShmId_Invalid, QByteArray(), SDIPCCMD_Invalid);
    sendCmd(ipcCmd);
}
