
#pragma once

#include "actionhelp.h"
#include <QObject>
#include "ESDSharedFileClient.h"
#include <streamdeckipc.h>
#include <QThread>
#include <QTimer>
#include <QDataStream>
#include <QMutex>

class IPC_Thread : public QObject
{
    Q_OBJECT
public:
    explicit IPC_Thread(QObject *parent = 0);
    ~IPC_Thread();
    void start();
    void stop();

    static void fillDataBuf(QByteArray &buf, const QStringList &list, const QString appendStr=QString());
    static void fillDataBuf(QByteArray &buf, const QString &errStr, const QList<SourceInfo> &list);
	static void fillDataBuf(QByteArray &buf, const QList<SceneInfo> &list);

signals:

public slots:
    void onBkTimerTimeout();
    IPC_CMD makeIpcCmd(ShmID recId, const QByteArray &buf, const quint64 cmdId, quint64 expiredMs=1500);
    void sendCmdToList(ShmID recId, const QByteArray &buf, const quint64 cmdId, quint64 expiredMs=1500);
    void sendCmdToList(IPC_CMD cmd);
    void onNotify(ShmID recId, QStringList msgList); // QString msg);

private:
    void getPayloadAndCmdData(const char *shfPtr, ShfPayload &payload, QByteArray &cmdData);
    void cmdHandle(const ShfPayload &payload, SDIPCCmd cmd, QDataStream &ds);
    bool sendCmd(const IPC_CMD &cmd);

    ESDSharedFileClient shf;
    QTimer bkTimer;
    QThread bkTimerThread;
    QMutex cmdListMutex;
    QList<IPC_CMD> sendCmdList;
};
