#include "addtaskcontroller.h"
#include "QMessageBox"

addTaskController::addTaskController(TaskManager *taskManager) : taskManager(taskManager){

}

void addTaskController::control(QString name, QString description, QDateTime dateDebut, QDateTime dateFin){
    if(name.isEmpty() == false && description.isEmpty() == false && dateDebut.isValid() && dateFin.isValid()){
        Task* task = new Task(name,description,dateDebut,dateFin);
        taskManager->add(task);
    }
    else{
        if(name.isEmpty()){
            QMessageBox::warning(nullptr,"Erreur","Une tache doit posséder un nom",QMessageBox::Ok);
        }
        if(description.isEmpty()){
            QMessageBox::warning(nullptr,"Erreur","Une tache doit posséder une description",QMessageBox::Ok);
        }
        if(!dateDebut.isValid()){
            QMessageBox::warning(nullptr,"Erreur","La date de début est invalide",QMessageBox::Ok);
        }
        if(!dateFin.isValid()){
            QMessageBox::warning(nullptr,"Erreur","La date de début est invalide",QMessageBox::Ok);
        }
    }
}
