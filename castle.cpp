#include "castle.h"

Castle::Castle() {

    Health = 30;

    QPixmap pixmap3(":/castle.png");
    QPixmap scaledPixmap = pixmap3.scaled(200, 200, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
