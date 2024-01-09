QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Organization_Page.cpp \
    create_organization.cpp \
    forgetpassword_page.cpp \
    login_page.cpp \
    main.cpp \
    mainwindow.cpp \
    register_login_page.cpp \
    sign_up.cpp \
    team_page.cpp

HEADERS += \
    Organization_Page.h \
    create_organization.h \
    forgetpassword_page.h \
    login_page.h \
    mainwindow.h \
    register_login_page.h \
    sign_up.h \
    team_page.h

FORMS += \
    Organization_Page.ui \
    create_organization.ui \
    forgetpassword_page.ui \
    login_page.ui \
    mainwindow.ui \
    register_login_page.ui \
    sign_up.ui \
    team_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
