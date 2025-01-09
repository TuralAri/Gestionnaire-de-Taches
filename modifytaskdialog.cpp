#include "modifytaskdialog.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QDialogButtonBox>


modifyTaskDialog::modifyTaskDialog(QWidget *parent, QString nom,QString description,QDateTime dateDebut, QDateTime dateFin) {
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QHBoxLayout *nameLayout = new QHBoxLayout();
    QLabel *nameLabel = new QLabel("Nom de la tache:", this);
    nameEdit = new QLineEdit(this);
    nameEdit->setText(nom);
    nameLayout->addWidget(nameLabel);
    nameLayout->addWidget(nameEdit);
    mainLayout->addLayout(nameLayout);

    QHBoxLayout *descriptionLayout = new QHBoxLayout();
    QLabel *descriptionLabel = new QLabel("Description de la tache:", this);

    mainLayout->addWidget(descriptionLabel);

    descriptionEdit = new QTextEdit(this);
    descriptionEdit->setText(description);
    descriptionLayout->addWidget(descriptionEdit);
    mainLayout->addLayout(descriptionLayout);

    QHBoxLayout *dateDebutLayout = new QHBoxLayout();
    QLabel *dateDebutLabel = new QLabel("Date de début:", this);
    dateDebutEdit = new QDateTimeEdit(this);
    dateDebutEdit->setDateTime(dateDebut);
    dateDebutLayout->addWidget(dateDebutLabel);
    dateDebutLayout->addWidget(dateDebutEdit);
    mainLayout->addLayout(dateDebutLayout);

    QHBoxLayout *dateFinLayout = new QHBoxLayout();
    QLabel *dateFinLabel = new QLabel("Date de fin:", this);
    dateFinEdit = new QDateTimeEdit(this);
    dateFinEdit->setDateTime(dateFin);
    dateFinLayout->addWidget(dateFinLabel);
    dateFinLayout->addWidget(dateFinEdit);
    mainLayout->addLayout(dateFinLayout);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
    mainLayout->addWidget(buttonBox);
}


QString modifyTaskDialog::getName()
{
    return nameEdit->text();
}

QString modifyTaskDialog::getDesc()
{
    return descriptionEdit->toPlainText();
}

QDateTime modifyTaskDialog::getDateDebut()
{
    return dateDebutEdit->dateTime();
}

QDateTime modifyTaskDialog::getDateFin()
{
    return dateFinEdit->dateTime();
}
