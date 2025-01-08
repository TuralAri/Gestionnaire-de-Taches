#include "gestionnairedetaches.h"
#include "ui_gestionnairedetaches.h"
#include "addtaskdialog.h"
#include "addtaskcontroller.h"

GestionnaireDeTaches::GestionnaireDeTaches(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GestionnaireDeTaches)
{
    ui->setupUi(this);
    //Initialisation du TaskManager
    taskManager = new TaskManager();
    //Initialisation des controllers
    deleteTaskController = new DeleteTaskController(taskManager);
    //Création des vues
    taskView = new TaskView(taskManager,ui->listWidget);
    calendarView = new CalendarView(taskManager,ui->calendarWidget_2);
    //Ajout des vues dans l'observable
    taskManager->addObserver(taskView);
    //Ajout des connexions
    connect(ui->pushButton_Delete,&QPushButton::pressed,this,&GestionnaireDeTaches::removeTask);
    connect(ui->actionAdd_Task,&QAction::triggered,this,&GestionnaireDeTaches::addTask);
}

void GestionnaireDeTaches::removeTask(){
    QListWidgetItem* currentItem = ui->listWidget->currentItem();
    if (currentItem) {
        QString taskName = currentItem->text();
        deleteTaskController->control(taskName);
    }
}

void GestionnaireDeTaches::addTask(){
    AddTaskDialog dialog;
    if(dialog.exec() == QDialog::Accepted){
        QString name = dialog.getName();
        QString desc = dialog.getDesc();
        QDateTime dateDebut = dialog.getDateDebut();
        QDateTime dateFin = dialog.getDateFin();
        addTaskController(taskManager).control(name,desc,dateDebut,dateFin);
    }
}

GestionnaireDeTaches::~GestionnaireDeTaches()
{
    delete ui;
}

Ui::GestionnaireDeTaches GestionnaireDeTaches::getUI()
{
    return *ui;
}
