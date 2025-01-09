#include "deletetaskcontroller.h"

DeleteTaskController::DeleteTaskController(TaskManager *taskManager) : taskManager(taskManager) {
}

void DeleteTaskController::control(int id){
    if(taskManager->contains(id)){
        taskManager->remove(id);
    }
}
