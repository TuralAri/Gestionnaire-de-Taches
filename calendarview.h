#ifndef CALENDARVIEW_H
#define CALENDARVIEW_H

#include "observers.h"
#include "taskmanager.h"

class CalendarView : public QObject, public Observer {
    Q_OBJECT
public:
    CalendarView(TaskManager* taskManager, QWidget* widget);
private:
    TaskManager *taskManager;
    QWidget* widget;

public slots:
    void updateModel();
};

#endif // CALENDARVIEW_H
