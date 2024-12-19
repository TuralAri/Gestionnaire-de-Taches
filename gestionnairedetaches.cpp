#include "gestionnairedetaches.h"
#include "ui_gestionnairedetaches.h"

GestionnaireDeTaches::GestionnaireDeTaches(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GestionnaireDeTaches)
{
    ui->setupUi(this);
    //Initialisation du TaskManager
    taskManager = new TaskManager();
    //Création des vues
    taskView = new TaskView(taskManager,ui->listWidget);
    //Ajout des vues dans l'observable
    taskManager->addObserver(taskView);
}

GestionnaireDeTaches::~GestionnaireDeTaches()
{
    delete ui;
}
