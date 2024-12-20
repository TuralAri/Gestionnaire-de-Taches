#include "task.h"

QString Task::getName() const
{
    return name;
}

QString Task::getDescription() const
{
    return description;
}

QDateTime Task::getDateStart() const
{
    return dateStart;
}

QDateTime Task::getDateEnd() const
{
    return dateEnd;
}

Task::Task(const QString &name, const QString &description, const QDateTime &dateStart, const QDateTime &dateEnd) :
    name(name),
    description(description),
    dateStart(dateStart),
    dateEnd(dateEnd)
{}
