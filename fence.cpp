#include "fence.h"

Fence::Fence() {

    Health = 10;


    QPixmap pixmap3(":/fence.png");
    QPixmap scaledPixmap = pixmap3.scaled(150, 150, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
