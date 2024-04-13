#ifndef CASTLE_H
#define CASTLE_H

#include <QObject>
#include <QGraphicsPixmapItem>

class Castle : public QGraphicsPixmapItem, public QObject
{
protected:
    int Health;

public:
    Castle();
};

#endif // CASTLE_H
