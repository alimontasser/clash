#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <troop.h>

class Enemy : public Troop
{
public:
    Enemy();
    void Deal_Damage(){}
};

#endif // ENEMY_H
