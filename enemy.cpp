#include "enemy.h"

Enemy::Enemy() {

    Health = 6;

    QPixmap pixmap3(":/enemy.png");
    QPixmap scaledPixmap = pixmap3.scaled(10, 50, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
