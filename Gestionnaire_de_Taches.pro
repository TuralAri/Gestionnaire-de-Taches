QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addtaskcontroller.cpp \
    addtaskdialog.cpp \
    calendarview.cpp \
    connexionwindow.cpp \
    deletetaskcontroller.cpp \
    main.cpp \
    gestionnairedetaches.cpp \
    modifytaskcontroller.cpp \
    modifytaskdialog.cpp \
    task.cpp \
    taskmanager.cpp \
    taskview.cpp

HEADERS += \
    addtaskcontroller.h \
    addtaskdialog.h \
    calendarview.h \
    connexionwindow.h \
    deletetaskcontroller.h \
    gestionnairedetaches.h \
    modifytaskcontroller.h \
    modifytaskdialog.h \
    observers.h \
    task.h \
    taskmanager.h \
    taskview.h

FORMS += \
    connexionwindow.ui \
    gestionnairedetaches.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
