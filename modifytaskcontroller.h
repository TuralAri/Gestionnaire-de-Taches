#ifndef MODIFYTASKCONTROLLER_H
#define MODIFYTASKCONTROLLER_H

#include "taskmanager.h"
class ModifyTaskController{
private:
    TaskManager* taskManager;
public:
    ModifyTaskController(TaskManager *taskManager);
    void control(int id, QString name, QString description, QDateTime dateDebut, QDateTime dateFin);
};

#endif // MODIFYTASKCONTROLLER_H
