#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <castle.h>
#include <Archer.h>
#include <cannon.h>
#include <wizardtower.h>
#include <enemy.h>
#include <worker.h>
#include <fence.h>
#include <QTimer>
#include <random>
#include <QRandomGenerator>
#include <stdlib.h>
#include <QtWidgets>
#include <MyGraphicsView.h>




int main(int argc, char *argv[])
{


    QApplication a(argc, argv);


    MyGraphicsView *view = new MyGraphicsView();
    view->setFixedSize(1600, 1000);

    // Create the Scene
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1600, 1000); // Set the scene size to match the view


    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QPixmap image(":/background.png");
    QPixmap scaledPixmap = image.scaled(1600, 1000, Qt::KeepAspectRatioByExpanding);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(scaledPixmap);
    scene->addItem(item);

    //Castle
    Castle * castle = new Castle;
    castle -> setPos(scene->width()/2 - 100,scene->height()/2);
    scene->addItem(castle);

    //Walls

    for(int i = 0; i<14;i++){
        Fence * leftFence = new Fence;
        leftFence -> setPos(scene->width()/2 - 300,scene->height()/2 - 400 + (50*i));
        scene->addItem(leftFence);
    }

    for(int i = 0; i<14;i++){
        Fence * rightFence = new Fence;
        rightFence -> setPos(scene->width()/2 + 150,scene->height()/2 - 400 + (50*i));
        scene->addItem(rightFence);
    }



    for(int i = 0; i<8;i++){
        Fence * topFence = new Fence;
        topFence -> setPos(scene->height()/2 + 50 + (50*i) ,scene->width()/2 - 700);
        scene->addItem(topFence);
    }


    for(int i = 0; i<8;i++){
        Fence * bottomFence = new Fence;
        bottomFence -> setPos(scene->height()/2 + 50 + (50*i) ,scene->width()/2 - 50);
        scene->addItem(bottomFence);
    }





    //Defense

    Archer * archer = new Archer;
    archer -> setPos(scene->width()/2 - 50,scene->height()/2 - 200 );
    scene->addItem(archer);

    //Enemies


    for (int i = 0; i < 10; i++) {
        Enemy *enemy = new Enemy;

        int x, y;
        bool spawn = true;

        while(spawn){

            x = QRandomGenerator::global()->bounded(0, 1600);
            y = QRandomGenerator::global()->bounded(0, 1600);
            int leftFenceX = (scene->width() / 2) - 300;
            int rightFenceX = (scene->width() / 2) + 150;
            int fenceTopY = (scene->height() / 2) - 400;
            int fenceBottomY = (scene->height() / 2) + 50 + (7 * 50);

            if ((x < leftFenceX || x > rightFenceX) || (y < fenceTopY || y > fenceBottomY)) {

                enemy->setPos(x, y);
                scene->addItem(enemy);
                spawn = false;
            }
        }




    }



    //Worker
    for(int i = 0; i < 5; i++) {
        Worker *worker = new Worker;
        int xPos = QRandomGenerator::global()->bounded(550, 900);
        int yPos = QRandomGenerator::global()->bounded(100, 700);
        worker->setPos(xPos, yPos);
        scene->addItem(worker);
    }




    view->setScene(scene);
    view->show();

    QObject::connect(view, &MyGraphicsView::mousePositionChanged, view, &MyGraphicsView::handleMousePress);


    return a.exec();  // Start the event loop
}
