#ifndef MODIFYTASKDIALOG_H
#define MODIFYTASKDIALOG_H

#include <QObject>
#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QCheckBox>
#include <QPushButton>
#include <QFileDialog>
#include <QDateTimeEdit>
#include <QTextEdit>

class modifyTaskDialog : public QDialog
{
    Q_OBJECT
public:
    explicit modifyTaskDialog(QWidget *parent = nullptr, QString nom = nullptr, QString description =nullptr, QDateTime dateDebut = QDateTime(), QDateTime dateFin = QDateTime());
    QString getName();
    QString getDesc();
    QDateTime getDateDebut();
    QDateTime getDateFin();
private:
    QLineEdit *nameEdit;
    QTextEdit *descriptionEdit;
    QDateTimeEdit *dateDebutEdit;
    QDateTimeEdit *dateFinEdit;
};

#endif // MODIFYTASKDIALOG_H
