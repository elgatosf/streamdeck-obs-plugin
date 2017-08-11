#include "sharedfile.h"
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QDebug>
#include <QStandardPaths>

// ----------------------------------------------------------------------------
SharedFile::SharedFile(const QString &key, qint64 size) :
    createFlag(false),
    lockedFlag(false),
    _key(key),
    mapFilePtr(NULL),
    sem(NULL)
{
#if defined(Q_OS_MAC)
    mapfile = QStandardPaths::standardLocations(QStandardPaths::GenericCacheLocation).at(0);
    mapfile.append(QString("/" + _key));

#elif defined(Q_OS_WIN64) || defined(Q_OS_WIN32)
    mapfile = QString(QDir::tempPath() + "/" + _key);
#endif

    mapFileHdl = new QFile(mapfile);

    qDebug() << "mapfile location:" << mapfile;

    QString err;
    create(size, err);
}

SharedFile::~SharedFile()
{
    close();
    delete mapFileHdl;
}

bool SharedFile::create(qint64 size, QString &err)
{
    if (createFlag)
        return true;

    // create syste msemaphore
    if (!sem) {
        sem = new QSystemSemaphore(_key, 1, QSystemSemaphore::Create);
        if (sem->error()!=QSystemSemaphore::NoError) {
            err = QString("Error: Unable to create semaphore: %1").arg(sem->errorString());
            qDebug() << err;
            return false;
        }
    }

    _mapSize = size + sizeof(qint32);   // size + access cnt

    // open / create mapfile if not exist.
    QFileInfo f(mapfile);
    if (f.exists()) {
        if (!mapFileHdl->open(QIODevice::ReadWrite | QIODevice::Unbuffered)) {
            err = "Error: Could not open SharedFile.";
            qDebug() << err;
            return false;
        }

    } else {
        if (!mapFileHdl->open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Unbuffered)) {
            err = "Error: Could not create SharedFile.";
            qDebug() << err;
            return false;
        }
    }           

    // mapFileHdl->setPermissions(mapFileHdl->permissions() | QFileDevice::ReadOther | QFileDevice::WriteOther);
    mapFileHdl->setPermissions(QFileDevice::ReadOwner | QFileDevice::WriteOwner | QFileDevice::ExeOwner |
                               QFileDevice::ReadUser  | QFileDevice::WriteUser  | QFileDevice::ExeUser  |
                               QFileDevice::ReadGroup | QFileDevice::WriteGroup | QFileDevice::ExeGroup |
                               QFileDevice::ReadOther | QFileDevice::WriteOther | QFileDevice::ExeOther );

    if (f.size()<_mapSize)
    {
		if(f.size() > 0)
		{
			qDebug() << "Warning: Opened SHF size is smaller than needed, resized to " << _mapSize;
		}

        if (!mapFileHdl->resize(_mapSize))
        {
            mapFileHdl->close();
            err = "Error: Could not resize SharedFile.";
            qDebug() << err;
            return false;
        }
    }

    // increase access cnt
    if (!attach())
        return false;

    *((qint32*)(mapFilePtr + mapFileHdl->size())) += 1;


    createFlag = true;
    return true;
}

bool SharedFile::close()
{
    createFlag = false;

    bool delFile = false;
    // check access cnt
    if (isAttached() || attach()) {
        qint32* accessCnt = ((qint32*)(mapFilePtr + mapFileHdl->size()));
        *accessCnt -= 1;
        qDebug() << __FUNCTION__ << "Access count: " << *accessCnt;
        delFile = (*accessCnt == 0 ? true : false);
        detach();
    }

    // close map file
    mapFileHdl->close();
    if (delFile)
        mapFileHdl->remove();

    // release system semaphore
    if (sem) {
        if (lockedFlag) {
            lockedFlag = false;
            sem->release();
        }
        delete sem;
        sem = NULL;
    }

    return true;
}

bool SharedFile::attach()
{
    if (isAttached()) {
//        qDebug() << "Warning: Asked to attach while already attached.";
        return true;
    }

    if (!mapFileHdl->isOpen()) {
        qDebug() << "Error: Unable to open or create SharedFile.";
        return false;
    }
	
    mapFilePtr = mapFileHdl->map(0, mapFileHdl->size(), QFileDevice::NoOptions);
    if (!mapFilePtr) {
        qDebug() << "Error: Could not map SharedFile.";
        return false;
    }

    return true;
}

void SharedFile::detach()
{
    if (!isAttached()) {
        qDebug() << __FUNCTION__ << "Warning: Asked to detach while not attached.";
        return;
    }

    mapFileHdl->flush();
    mapFileHdl->unmap(mapFilePtr);
    mapFilePtr = NULL;
}

bool SharedFile::lock()
{
    if (!isAttached()) {
        qDebug() << "Warning: Asked to lock while not attached.";
        return false;
    }

    if (!sem->acquire()) {
        qDebug() << sem->errorString();
        return false;
    }

    lockedFlag = true;
    return true;
}

bool SharedFile::unlock()
{
    if (!isAttached()) {
        qDebug() << "Warning: Asked to unlock while not attached.";
        return false;
    }

    if (!sem->release()) {
        qDebug() << sem->errorString();
        return false;
    }

    lockedFlag = false;
    return true;
}

bool SharedFile::isCreated()
{
    return createFlag;
}

bool SharedFile::isLocked()
{
    return lockedFlag;
}

bool SharedFile::isAttached()
{
    return mapFilePtr;
}

void* SharedFile::data()
{
    if (!isAttached()) {
        qDebug() << "Warning: Asked for data while not attached.";
        return NULL;
    }

    return mapFilePtr;
}

qint64 SharedFile::getMapSize()
{
    return _mapSize;
}

QString SharedFile::key()
{
    return _key;
}
