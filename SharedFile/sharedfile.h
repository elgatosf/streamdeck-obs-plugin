#ifndef SHAREDFILE_H
#define SHAREDFILE_H

#include <QObject>
#include <QFile>
#include <QSystemSemaphore>

class SharedFile
{
public:
    SharedFile(const QString &key, qint64 size);    // if exist attach other create
    ~SharedFile();

    bool create(qint64 size, QString &err);
    bool attach();
    void detach();
    bool isCreated();
    bool isLocked();
    bool isAttached();
    bool lock();
    bool unlock();
    void* data();
    qint64 getMapSize();
    QString key();

private:
    bool close();

    bool createFlag;
    bool lockedFlag;
    QString _key;
    QString mapfile;
    qint64 _mapSize;
    QFile *mapFileHdl;
    uchar *mapFilePtr;  // ptr to attach map
    QSystemSemaphore *sem;
};

#endif // SHAREDFILE_H
