#ifndef ADDTASKDIALOG_H
#define ADDTASKDIALOG_H

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

class AddTaskDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddTaskDialog(QWidget *parent = nullptr);
private:
    QLineEdit *nameEdit;
    QTextEdit *descriptionEdit;
    QDateTimeEdit *dateDebutEdit;
    QDateTimeEdit *dateFinEdit;

signals:
};

#endif // ADDTASKDIALOG_H
