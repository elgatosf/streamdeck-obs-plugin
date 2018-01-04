#include "ESDSharedFileClient.h"
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QDebug>
#include <QStandardPaths>

// For blog
#include <obs-module.h>

#if defined(Q_OS_WIN64) || defined(Q_OS_WIN32)
    #include <Shlobj.h>
    #include <atlstr.h>		// for namespace ATL
    #include <atlconv.h>	// for string conversion macros
#endif

static std::string GetApplicationDataFolder(bool inForAllUsers)
{
    std::string retPath;

#if defined(Q_OS_WIN64) || defined(Q_OS_WIN32)
    PWSTR path = nullptr;
    HRESULT success;

    if(inForAllUsers)
    {
        success = SHGetKnownFolderPath(FOLDERID_ProgramData, 0, 0, &path);
    }
    else
    {
        success = SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, 0, &path);
    }

    if (SUCCEEDED(success))
        retPath = CW2A(path, CP_UTF8);
    if (path)
        CoTaskMemFree(path);
#else

    if(inForAllUsers)
    {
        retPath = "/Library/Application Support";
    }
    else
    {
        retPath = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation).toStdString();
    }

#endif

    return retPath;
}

// ----------------------------------------------------------------------------
ESDSharedFileClient::ESDSharedFileClient(const QString &key) :
    lockedFlag(false),
    _key(key),
    mapFilePtr(NULL),
    sem(NULL)
{
#if defined(Q_OS_MAC)
    QString sharedFilePath = QString(GetApplicationDataFolder(false).c_str());
#else
    QString sharedFilePath = QString(GetApplicationDataFolder(true).c_str());
#endif

    sharedFilePath = QDir::cleanPath(sharedFilePath + QDir::separator() + "Elgato");
    sharedFilePath = QDir::cleanPath(sharedFilePath + QDir::separator() + "StreamDeck");
    mapfile = QDir::cleanPath(sharedFilePath + QDir::separator() + _key);

    mapFileHdl = new QFile(mapfile);

    blog(LOG_INFO, "mapfile location %s", mapfile.toStdString().c_str());
    qDebug() << "mapfile location:" << mapfile;

    open();
}

ESDSharedFileClient::~ESDSharedFileClient()
{
    close();
    delete mapFileHdl;
}

bool ESDSharedFileClient::closeIfNeeded()
{
    QFileInfo f(mapfile);
    if (!f.exists())
    {
        close();
        return true;
    }

    return false;
}

bool ESDSharedFileClient::open()
{
    QString err;

    // create system semaphore
    if (!sem)
    {
        sem = new QSystemSemaphore(_key, 1, QSystemSemaphore::Create);
        if (sem->error() != QSystemSemaphore::NoError)
        {
            blog(LOG_ERROR, "Unable to create semaphore %s", sem->errorString().toStdString().c_str());
            err = QString("Error: Unable to create semaphore: %1").arg(sem->errorString());
            qDebug() << err;
            return false;
        }
    }

    // open / create mapfile if not exist.
    QFileInfo f(mapfile);
    if (f.exists())
    {
        if (!mapFileHdl->open(QIODevice::ReadWrite | QIODevice::Unbuffered))
        {
            blog(LOG_ERROR, "Could not open SharedFile");
            err = "Error: Could not open SharedFile.";
            qDebug() << err;
            return false;
        }
    }
    else
    {
        err = "Error: SharedFile doesn't exist";
        blog(LOG_ERROR, "SharedFile doesn't exist");
        qDebug() << err;
        return false;
    }

    // increase access count
    if (!attach())
        return false;

    return true;
}

bool ESDSharedFileClient::close()
{
    if (isAttached())
    {
        detach();
    }

    // close map file
    mapFileHdl->close();

    // release system semaphore
    if (sem)
    {
        if (lockedFlag)
        {
            lockedFlag = false;
            sem->release();
        }

        delete sem;
        sem = NULL;
    }

    return true;
}

bool ESDSharedFileClient::attach()
{
    if (isAttached())
    {
        return true;
    }

    if (!mapFileHdl->isOpen())
    {
        blog(LOG_ERROR, "Unable to open or create SharedFile");
        qDebug() << "Error: Unable to open or create SharedFile.";
        return false;
    }
	
    mapFilePtr = mapFileHdl->map(0, mapFileHdl->size(), QFileDevice::NoOptions);
    if (!mapFilePtr)
    {
        blog(LOG_ERROR, "Could not map SharedFile");
        qDebug() << "Error: Could not map SharedFile.";
        return false;
    }

    return true;
}

void ESDSharedFileClient::detach()
{
    if (!isAttached())
    {
        blog(LOG_WARNING, "Asked to detach while not attached");
        qDebug() << __FUNCTION__ << "Warning: Asked to detach while not attached.";
        return;
    }

    mapFileHdl->flush();
    mapFileHdl->unmap(mapFilePtr);
    mapFilePtr = NULL;
}

bool ESDSharedFileClient::lock()
{
    if (!isAttached())
    {
        blog(LOG_WARNING, "Asked to lock while not attached");
        qDebug() << "Warning: Asked to lock while not attached.";
        return false;
    }

    if (!sem->acquire())
    {
        blog(LOG_WARNING, "Could not acquire lock due to %s", sem->errorString().toStdString().c_str());
        qDebug() << sem->errorString();
        return false;
    }

    lockedFlag = true;
    return true;
}

bool ESDSharedFileClient::unlock()
{
    if (!isAttached())
    {
        blog(LOG_WARNING, "Asked to unlock while not attached");
        qDebug() << "Warning: Asked to unlock while not attached.";
        return false;
    }

    if (!sem->release())
    {
        blog(LOG_WARNING, "Could not release lock due to %s", sem->errorString().toStdString().c_str());
        qDebug() << sem->errorString();
        return false;
    }

    lockedFlag = false;
    return true;
}

bool ESDSharedFileClient::isLocked()
{
    return lockedFlag;
}

bool ESDSharedFileClient::isAttached()
{
    return mapFilePtr;
}

void* ESDSharedFileClient::data()
{
    if (!isAttached())
    {
        blog(LOG_WARNING, "Asked for data while not attached");
        qDebug() << "Warning: Asked for data while not attached.";
        return NULL;
    }

    return mapFilePtr;
}

QString ESDSharedFileClient::key()
{
    return _key;
}
