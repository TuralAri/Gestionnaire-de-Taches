#ifndef GESTIONNAIREDETACHES_H
#define GESTIONNAIREDETACHES_H

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

private:
    Ui::GestionnaireDeTaches *ui;
    TaskManager *taskManager;
    TaskView *taskView;
};
#endif // GESTIONNAIREDETACHES_H
