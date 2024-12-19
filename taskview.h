#ifndef TASKVIEW_H
#define TASKVIEW_H
#include "QObject"
#include "observers.h"
#include "qlistwidget.h"
#include "taskmanager.h"

class TaskView : public QObject, public Observer
{
    Q_OBJECT
private:
    TaskManager* taskManager;
    QListWidget* listWidget;

public:
    TaskView(TaskManager *taskManager, QListWidget*);
public slots:
    void updateModel();
};

#endif // TASKVIEW_H
