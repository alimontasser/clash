#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <troop.h>

class Enemy : public Troop
{
public:
    Enemy();

public slots:
    void Deal_Damage();
    void Enemy_Spawn();
    void move();
};

#endif // ENEMY_H
