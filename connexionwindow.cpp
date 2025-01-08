#include "connexionwindow.h"
#include "ui_connexionwindow.h"
#include <QLineEdit>

ConnexionWindow::ConnexionWindow(QWidget *parent)
    : QMainWindow(parent)
    , gw(new GestionnaireDeTaches(this))
    ,ui(new Ui::ConnexionWindow)
{
    ui->setupUi(this);
    connect(ui->connexionButton, &QPushButton::pressed,this,&ConnexionWindow::afficheGestionnaire);
    ui->passwordInput->setEchoMode(QLineEdit::Password);
}

void ConnexionWindow::afficheGestionnaire(){
    gw->show();
    this->hide();
}

ConnexionWindow::~ConnexionWindow()
{
    delete ui;
}
