#include "fence.h"

Fence::Fence() {

    Health = 10;


    QPixmap pixmap3(":/fence.png");
    QPixmap scaledPixmap = pixmap3.scaled(250, 250, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
