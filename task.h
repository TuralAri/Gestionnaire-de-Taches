#ifndef TASK_H
#define TASK_H
#include "qdatetime.h"
#include <QString>
#include <QLocale>

class Task{
private:
    static int current_id;
    int id;
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
    int getId() const;
    void setName(const QString &newName);
    void setDescription(const QString &newDescription);
    void setDateStart(const QDateTime &newDateStart);
    void setDateEnd(const QDateTime &newDateEnd);
};

#endif // TASK_H
