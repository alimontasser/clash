#include "arrow.h"

Arrow::Arrow() {

    QPixmap pixmap3(":/arrow.png");
    QPixmap scaledPixmap = pixmap3.scaled(100, 100, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);


}
