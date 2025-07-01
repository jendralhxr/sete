#ifndef SETEDISPLAY_H
#define SETEDISPLAY_H

#include <QObject>
#include <QWidget>
#include <QOpenGLWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

class SeteDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit SeteDisplay(QWidget *parent = nullptr);

signals:

private:
    QGraphicsScene *m_scene;
    QGraphicsPixmapItem *m_image_item;


};

#endif // SETEDISPLAY_H
