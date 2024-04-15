#ifndef TROOP_H
#define TROOP_H

#include <QObject>
#include <QGraphicsPixmapItem>


class Troop : public QGraphicsPixmapItem, public QObject
{
protected:
    int Health, posX, posY;


public:
    Troop();


};

#endif // TROOP_H
