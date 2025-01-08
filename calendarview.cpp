#include "calendarview.h"
#include "qwidget.h"
#include <QCalendarWidget>
#include <QVBoxLayout>

CalendarView::CalendarView(TaskManager* taskManager, QWidget* widget) : taskManager(taskManager), widget(widget){
    updateModel();
}

void CalendarView::updateModel(){
    widget->update();
}
