#include "taskmanager.h"

TaskManager::TaskManager() {
    tasks.append(new Task("Test","test",QDateTime().currentDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
    tasks.append(new Task("Test","test",QDateTime(),QDateTime()));
}

void TaskManager::add(Task *task){
    tasks.append(task);
    notifyObserver();
}

void TaskManager::remove(QString name){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getName() == name){
            delete tasks[i];
            tasks.remove(i);
            break;
        }
    }
    notifyObserver();
}

bool TaskManager::contains(QString name){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getName() == name){
            return true;
        }
    }
    return false;
}

QVector<Task *> TaskManager::getTasks(){
    return tasks;
}
