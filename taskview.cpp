#include "taskview.h"
#include "qlistwidget.h"

TaskView::TaskView(TaskManager *taskManager, QListWidget *listWidget) : taskManager(taskManager),listWidget(listWidget) {
    this->updateModel();
}

void TaskView::updateModel(){
    QVector<Task*> tasks = taskManager->getTasks();
    QList<QString> listValues;

    for (Task* task : tasks) {
        listValues.push_back(task->getText());
    }

    listWidget->clear();
    listWidget->addItems(listValues);
}
