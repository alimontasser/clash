#ifndef DEFENSEUNIT_H
#define DEFENSEUNIT_H

#include <QObject>
#include <QGraphicsPixmapItem>

class DefenseUnit : public QGraphicsPixmapItem, public QObject
{
protected:
    int Health;

public:
    DefenseUnit();
    virtual void Weapon_Damage(){}
};

#endif // DEFENSEUNIT_H
