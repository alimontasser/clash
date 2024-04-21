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

    int newX = x();
    int newY = y();

    if (pos().y() < 80) {
        newY += 2;
    } else if (pos().y() > 800) {
        newY -= 2;
    }

    if (pos().x() > 1000) {
        newX -= 2;
    } else if (pos().x() < 520) {
        newX += 2;
    }

    setPos(newX, newY);
}

