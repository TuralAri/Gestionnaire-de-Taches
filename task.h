#ifndef TASK_H
#define TASK_H
#include "qdatetime.h"
#include <QString>
#include <QLocale>

class Task{
private:
    QString name;
    QString description;
    QDateTime dateStart;
    QDateTime dateEnd;
    QLocale *locale;

public:
    Task(const QString &name, const QString &description, const QDateTime &dateStart, const QDateTime &dateEnd);
    QString getName() const;
    QString getDescription() const;
    QDateTime getDateStart() const;
    QDateTime getDateEnd() const;
    QString getText() const;
};

#endif // TASK_H
