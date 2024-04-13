#include "cannon.h"

Cannon::Cannon() {

    QPixmap pixmap3(":/cannon.png");
    QPixmap scaledPixmap = pixmap3.scaled(10, 50, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
