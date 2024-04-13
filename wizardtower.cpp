#include "wizardtower.h"

WizardTower::WizardTower() {

    QPixmap pixmap3(":/wizardTower.png");
    QPixmap scaledPixmap = pixmap3.scaled(10, 50, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}
