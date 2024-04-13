#include "Archer.h"

Archer::Archer() {


    QPixmap pixmap3(":/archer.png");
    QPixmap scaledPixmap = pixmap3.scaled(150, 150, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);


}
