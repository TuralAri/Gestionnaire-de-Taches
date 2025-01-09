#include "taskview.h"
#include "qlistwidget.h"

TaskView::TaskView(TaskManager *taskManager, QListWidget *listWidget) : taskManager(taskManager),listWidget(listWidget) {
    this->updateModel();
}

void TaskView::updateModel() {
    QVector<Task*> tasks = taskManager->getTasks();
    listWidget->clear();

    for (Task* task : tasks) {
        QListWidgetItem* item = new QListWidgetItem(task->getText(), listWidget);
        item->setData(Qt::UserRole, task->getId());
        listWidget->addItem(item);
    }
}

