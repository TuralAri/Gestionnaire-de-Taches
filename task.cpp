#include "task.h"

int Task::current_id = 1;

int Task::getId() const{
    return id;
}

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

QString Task::getText() const{
    return name; // + " " +locale->toString(dateStart.date())
}

void Task::setName(const QString &newName)
{
    name = newName;
}

void Task::setDescription(const QString &newDescription)
{
    description = newDescription;
}

void Task::setDateStart(const QDateTime &newDateStart)
{
    dateStart = newDateStart;
}

void Task::setDateEnd(const QDateTime &newDateEnd)
{
    dateEnd = newDateEnd;
}

Task::Task(const QString &name, const QString &description, const QDateTime &dateStart, const QDateTime &dateEnd) :
    id(current_id++),
    name(name),
    description(description),
    dateStart(dateStart),
    dateEnd(dateEnd)
{
    locale = new QLocale(QLocale::French);
}
