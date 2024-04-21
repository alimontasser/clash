#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QMouseEvent>
#include <QDebug>
#include<arrow.h>


class MyGraphicsView : public QGraphicsView {
    Q_OBJECT  // Add Q_OBJECT macro for signal-slot mechanism support
signals:
    void mousePositionChanged(const QPoint &pos);

public:
    MyGraphicsView(QWidget *parent = nullptr) : QGraphicsView(parent) {}


    void mousePressEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {
            QPoint mousePos = event->pos();
            Arrow *arrow = new Arrow;
            arrow->setPos(mousePos);
            scene()->addItem(arrow);
        }

        QGraphicsView::mousePressEvent(event);
    }

public slots:
    void handleMousePress(const QPoint &pos) {
        qDebug() << "Handling mouse press at position: " << pos;
        // Add your custom handling logic here
    }

};

#endif // MYGRAPHICSVIEW_H
