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
    castle -> setPos(280,400);
    scene->addItem(castle);

    //Walls

    for(int i = 0; i<4;i++){
        Fence * leftFence = new Fence;
        leftFence -> setPos(100,150 + (100*i));
        scene->addItem(leftFence);
    }

    for(int i = 0; i<3;i++){
        Fence * topFence = new Fence;
        topFence -> setPos(150 + (100*i) ,50);
        scene->addItem(topFence);
    }

    for(int i = 0; i<4;i++){
        Fence * rightFence = new Fence;
        rightFence -> setPos(400,150 + (100*i));
        scene->addItem(rightFence);
    }

    for(int i = 0; i<3;i++){
        Fence * bottomFence = new Fence;
        bottomFence -> setPos(150 + (100*i) ,500);
        scene->addItem(bottomFence);
    }





    //Defense

    Archer * archer = new Archer;
    archer -> setPos(320,250);
    scene->addItem(archer);

    //Enemies


    // Set the scene and show the view
    view->setScene(scene);
    view->show();

    return a.exec();  // Start the event loop
}
