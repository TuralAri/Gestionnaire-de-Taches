#ifndef CONNEXIONWINDOW_H
#define CONNEXIONWINDOW_H

#include "gestionnairedetaches.h"
#include <QMainWindow>

namespace Ui {
class ConnexionWindow;
}

class ConnexionWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConnexionWindow(QWidget *parent = nullptr);
    ~ConnexionWindow();
    GestionnaireDeTaches *gw;

private:
    Ui::ConnexionWindow *ui;
    void afficheGestionnaire();
};

#endif // CONNEXIONWINDOW_H
