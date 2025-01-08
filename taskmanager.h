#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include "observers.h"
#include "task.h"

class TaskManager : public Observable
{
private:
    QVector<Task*> tasks;
public:
    TaskManager();
    void add(Task* task);
    void remove(QString name);
    bool contains(QString name);
    QVector<Task*> getTasks();
};

#endif // TASKMANAGER_H
