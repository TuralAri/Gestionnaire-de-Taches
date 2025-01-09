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

void TaskManager::remove(int id){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getId() == id){
            delete tasks[i];
            tasks.remove(i);
            break;
        }
    }
    notifyObserver();
}

void TaskManager::modify(int id, QString name, QString description, QDateTime dateDebut, QDateTime dateFin){
    Task* tache = getTask(id);
    tache->setName(name);
    tache->setDescription(description);
    tache->setDateStart(dateDebut);
    tache->setDateEnd(dateFin);
    notifyObserver();
}

bool TaskManager::contains(int id){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getId() == id){
            return true;
        }
    }
    return false;
}

Task *TaskManager::getTask(int id){
    for(int i=0;i<tasks.size();++i){
        if(tasks[i]->getId() == id){
            return tasks[i];
        }
    }
    return nullptr;
}

QVector<Task *> TaskManager::getTasks(){
    return tasks;
}
