#ifndef FENCE_H
#define FENCE_H

#include <QObject>
#include <QGraphicsPixmapItem>


class Fence : public QGraphicsPixmapItem, public QObject
{
protected:
    int Health;

public:
    Fence();
};

#endif // FENCE_H
