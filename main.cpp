#include "gestionnairedetaches.h"
#include "connexionwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GestionnaireDeTaches w;
    // w.show();
    w.show();
    return a.exec();
}
