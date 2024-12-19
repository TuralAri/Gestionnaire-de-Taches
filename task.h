#ifndef TASK_H
#define TASK_H
#include "qdatetime.h"
#include <QString>

class Task{
private:
    QString name;
    QString description;
    QDateTime dateStart;
    QDateTime dateEnd;

public:
    Task(const QString &name, const QString &description, const QDateTime &dateStart, const QDateTime &dateEnd);
    QString getName() const;
    QString getDescription() const;
    QDateTime getDateStart() const;
    QDateTime getDateEnd() const;
};

#endif // TASK_H
