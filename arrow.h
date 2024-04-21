#ifndef ARROW_H
#define ARROW_H

#include <QObject>
#include <QWidget>
#include <QGraphicsPixmapItem>

class Arrow : public QObject,  public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Arrow();
};

#endif // ARROW_H
