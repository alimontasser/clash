#include "worker.h"

worker::worker() {
    Health = 1;

    QPixmap pixmap3(":/worker.png");
    QPixmap scaledPixmap = pixmap3.scaled(150, 150, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
