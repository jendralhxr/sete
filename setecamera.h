#ifndef SETECAMERA_H
#define SETECAMERA_H

#include <QObject>
#include <QThread>

class SeteCamera : public QThread
{
    Q_OBJECT
public:
    explicit SeteCamera(QThread *parent = nullptr);

public slots:
    int setExposure();
    int setFPS();
    int setGain();

signals:

private:
    void run();
};

#endif // SETECAMERA_H
