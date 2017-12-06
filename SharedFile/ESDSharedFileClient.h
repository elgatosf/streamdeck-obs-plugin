
#pragma once

#include <QObject>
#include <QFile>
#include <QSystemSemaphore>

class ESDSharedFileClient
{
public:
    ESDSharedFileClient(const QString &key);    // if exist attach other create
    ~ESDSharedFileClient();

    bool closeIfNeeded();
    bool open();
    bool attach();
    void detach();

    bool isAttached();
    bool isLocked();

    bool lock();
    bool unlock();
    void* data();
    QString key();

private:

    bool close();

    bool lockedFlag;
    QString _key;
    QString mapfile;
    QFile *mapFileHdl;
    uchar *mapFilePtr;  // ptr to attach map
    QSystemSemaphore *sem;
};
