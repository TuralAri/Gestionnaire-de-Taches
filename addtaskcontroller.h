#ifndef ADDTASKCONTROLLER_H
#define ADDTASKCONTROLLER_H

#include "taskmanager.h"
class addTaskController{
private:
    TaskManager* taskManager;
public:
    addTaskController(TaskManager *taskManager);
    void control(QString name, QString description, QDateTime dateDebut, QDateTime dateFin);
};

#endif // ADDTASKCONTROLLER_H
