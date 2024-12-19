#include "taskmanager.h"

TaskManager::TaskManager() {
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
}

void TaskManager::add(Task *task){
    tasks.append(task);
}

void TaskManager::remove(QString name){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getName() == name){
            tasks.remove(i);
        }
    }
}

QVector<Task *> TaskManager::getTasks(){
    return tasks;
}
