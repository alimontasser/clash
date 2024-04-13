#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <troop.h>

class worker : public Troop
{
public:
    worker();
    void Repair(){}
};

#endif // WORKER_H
