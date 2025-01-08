#ifndef GESTIONNAIREDETACHES_H
#define GESTIONNAIREDETACHES_H

#include "calendarview.h"
#include "deletetaskcontroller.h"
#include "taskmanager.h"
#include "taskview.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GestionnaireDeTaches;
}
QT_END_NAMESPACE

class GestionnaireDeTaches : public QMainWindow
{
    Q_OBJECT

public:
    GestionnaireDeTaches(QWidget *parent = nullptr);
    ~GestionnaireDeTaches();
    Ui::GestionnaireDeTaches getUI();

private:
    Ui::GestionnaireDeTaches *ui;
    TaskManager *taskManager;
    TaskView *taskView;
    CalendarView *calendarView;
    DeleteTaskController* deleteTaskController;
    void removeTask();
    void addTask();
};
#endif // GESTIONNAIREDETACHES_H
