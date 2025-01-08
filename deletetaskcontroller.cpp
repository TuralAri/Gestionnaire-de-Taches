#include "deletetaskcontroller.h"

DeleteTaskController::DeleteTaskController(TaskManager *taskManager) : taskManager(taskManager) {
}

void DeleteTaskController::control(QString name){
    if(taskManager->contains(name)){
        taskManager->remove(name);
    }
}
