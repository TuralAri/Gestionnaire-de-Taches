#ifndef DELETETASKCONTROLLER_H
#define DELETETASKCONTROLLER_H

#include "taskmanager.h"
class DeleteTaskController
{
private:
    TaskManager* taskManager;
public:
    DeleteTaskController(TaskManager* taskManager);
    void control(QString name);
};

#endif // DELETETASKCONTROLLER_H