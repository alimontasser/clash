#include "enemy.h"
#include <QGraphicsScene>
#include <QTimer>

Enemy::Enemy() {

    Health = 6;

    QPixmap pixmap3(":/enemy.png");
    QPixmap scaledPixmap = pixmap3.scaled(100, 100, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

    //moving

    QTimer* timer = new QTimer(this);  // Parent the timer to the enemy for automatic cleanup
    connect(timer, &QTimer::timeout, this, &Enemy::move);
    timer->start(20);

}


void Enemy::Enemy_Spawn(){

    Enemy* enemy = new Enemy();
    enemy->setPos(100,100);
    scene()->addItem(enemy);

}

void Enemy::move() {
    if (!scene()) return;

    Enemy* enemy = new Enemy;
    if(pos().y() < 80){
    int newY = y() + 2;
    if (newY > scene()->height() - this->pixmap().height()) {
        newY = 0;
    }

    setPos(x(), newY);
    }


    if(pos().y() > 800){
        int newY = y() - 2;
        if (newY > scene()->height() - this->pixmap().height()) {
            newY = 0;
        }

        setPos(x(), newY);
    }

    if(pos().x() > 900){
        int newX = x() - 2;
        if (newX> scene()->height() - this->pixmap().height()) {
            newX = 0;
        }

        setPos(newX, y());
    }

    if(pos().x() < 520){
        int newX = x() + 2;
        if (newX> scene()->height() - this->pixmap().height()) {
            newX = 0;
        }

        setPos(newX, y());
    }
}
