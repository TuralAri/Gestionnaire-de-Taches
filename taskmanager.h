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
    void remove(int id);
    void modify(int id, QString name, QString description, QDateTime dateDebut, QDateTime dateFin);
    bool contains(int id);
    Task* getTask(int id);
    QVector<Task*> getTasks();
};

#endif // TASKMANAGER_H
