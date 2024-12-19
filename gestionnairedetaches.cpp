#include "gestionnairedetaches.h"
#include "ui_gestionnairedetaches.h"

GestionnaireDeTaches::GestionnaireDeTaches(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GestionnaireDeTaches)
{
    ui->setupUi(this);
}

GestionnaireDeTaches::~GestionnaireDeTaches()
{
    delete ui;
}
