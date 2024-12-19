#pragma once
#include <QList>

class Observer {
public:
    virtual ~Observer() = default;
    virtual void updateModel() = 0;
};

class Observable {
private:
    QList<Observer*> observers;
public:
    virtual ~Observable() = default;
    virtual void addObserver(Observer* observer) { observers.append(observer); };
    virtual void removeObserver(Observer* observer) { observers.removeAll(observer); };
    virtual void notifyObserver() const { for (Observer* obs : observers) obs->updateModel(); };
};
