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




int main(int argc, char *argv[])
{



    QApplication a(argc, argv);  // Use QApplication for GUI applications

    QGraphicsView *view = new QGraphicsView();
    view->setFixedSize(800, 800);

    // Create the Scene
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 800); // Set the scene size to match the view
    scene->setBackgroundBrush(Qt::darkGreen);  // Set the background color to dark green


    // Disable scrollbars
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //Castle
    Castle * castle = new Castle;
    castle -> setPos(220,380);
    scene->addItem(castle);

    //Walls

    for(int i = 0; i<7;i++){
        Fence * leftFence = new Fence;
        leftFence -> setPos(100,150 + (50*i));
        scene->addItem(leftFence);
    }

    for(int i = 0; i<6;i++){
        Fence * topFence = new Fence;
        topFence -> setPos(150 + (50*i) ,150);
        scene->addItem(topFence);
    }

    for(int i = 0; i<7;i++){
        Fence * rightFence = new Fence;
        rightFence -> setPos(400,150 + (50*i));
        scene->addItem(rightFence);
    }

    for(int i = 0; i<7;i++){
        Fence * bottomFence = new Fence;
        bottomFence -> setPos(100 + (50*i) ,500);
        scene->addItem(bottomFence);
    }





    //Defense

    Archer * archer = new Archer;
    archer -> setPos(270,250);
    scene->addItem(archer);

    //Enemies


    for(int i = 0; i<10;i++){
        Enemy * enemy = new Enemy;

        int x = 10 + rand() % 750;
        int y = 10 + rand() % 750;




        if(x>=100 && x<= 400){
            if(y>=150 && y<= 500){
                y+=350;
                x+=300;
            }
        }



        enemy -> setPos(x,y);

        scene->addItem(enemy);
    }

    /*
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),enemy,SLOT(Enemy_Spawn()));
    time->start(2000);
*/

    //Worker
    for(int i = 0; i<5;i++){
        Worker * worker = new Worker;
        worker -> setPos(150 + rand() % 250, 100 + rand() % 400);
        scene->addItem(worker);
    }




    // Set the scene and show the view
    view->setScene(scene);
    view->show();

    return a.exec();  // Start the event loop
}
