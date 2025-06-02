#ifndef SETEDISPLAY_H
#define SETEDISPLAY_H

#include <QObject>
#include <QWidget>

class SeteDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit SeteDisplay(QWidget *parent = nullptr);

signals:
};

#endif // SETEDISPLAY_H
