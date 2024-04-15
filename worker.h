#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <troop.h>

class Worker : public Troop
{
public:
    Worker();

public slots:

    void Repair();
    void Worker_Spawn();
    void Move();

};

#endif // WORKER_H



