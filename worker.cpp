#include "worker.h"
#include <QGraphicsScene>

Worker::Worker() {
    Health = 1;

    QPixmap pixmap3(":/worker.png");
    QPixmap scaledPixmap = pixmap3.scaled(100, 100, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);

}

void Worker::Worker_Spawn(){

    Worker* worker = new Worker();
    scene()->addItem(worker);

}

void Worker::Move(){
    setPos(x(), y() + 5);
}
