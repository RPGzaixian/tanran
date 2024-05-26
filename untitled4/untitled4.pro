QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    battle.cpp \
    character.cpp \
    main.cpp \
    mywidget.cpp \
    skill.cpp \
    t_f.cpp \
    true_false.cpp

HEADERS += \
    battle.h \
    character.h \
    mywidget.h \
    skill.h \
    t_f.h \
    true_false.h

FORMS += \
    mywidget.ui \
    t_f.ui \
    true_false.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
