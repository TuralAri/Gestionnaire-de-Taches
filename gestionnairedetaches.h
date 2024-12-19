#ifndef GESTIONNAIREDETACHES_H
#define GESTIONNAIREDETACHES_H

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
};
#endif // GESTIONNAIREDETACHES_H
