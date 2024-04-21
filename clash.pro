QT = core
QT += core gui
QT += widgets


CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Archer.cpp \
        arrow.cpp \
        cannon.cpp \
        castle.cpp \
        defenseunit.cpp \
        enemy.cpp \
        fence.cpp \
        main.cpp \
        troop.cpp \
        wizardtower.cpp \
        worker.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Archer.h \
    MyGraphicsView.h \
    arrow.h \
    cannon.h \
    castle.h \
    defenseunit.h \
    enemy.h \
    fence.h \
    troop.h \
    wizardtower.h \
    worker.h

FORMS +=

DISTFILES +=

RESOURCES += \
    pics.qrc
