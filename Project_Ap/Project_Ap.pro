QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Organization_Page.cpp \
    addpeopleorganization.cpp \
    addpeopletoteam.cpp \
    changeroleinorganization.cpp \
    changeroleinteam.cpp \
    create_organization.cpp \
    createteampage.cpp \
    creattask.cpp \
    deletepeoplefromorganization.cpp \
    deletepeoplefromteam.cpp \
    edit_organization_page.cpp \
    edittask.cpp \
    editteampage.cpp \
    forgetpassword_page.cpp \
    login_page.cpp \
    main.cpp \
    mainwindow.cpp \
    project_page.cpp \
    register_login_page.cpp \
    sign_up.cpp \
    task_page.cpp \
    team_page.cpp \
    vieworganization.cpp \
    viewteams.cpp

HEADERS += \
    Organization_Page.h \
    addpeopleorganization.h \
    addpeopletoteam.h \
    changeroleinorganization.h \
    changeroleinteam.h \
    create_organization.h \
    createteampage.h \
    creattask.h \
    deletepeoplefromorganization.h \
    deletepeoplefromteam.h \
    edit_organization_page.h \
    edittask.h \
    editteampage.h \
    forgetpassword_page.h \
    login_page.h \
    mainwindow.h \
    project_page.h \
    register_login_page.h \
    sign_up.h \
    task_page.h \
    team_page.h \
    vieworganization.h \
    viewteams.h

FORMS += \
    Organization_Page.ui \
    addpeopleorganization.ui \
    addpeopletoteam.ui \
    changeroleinorganization.ui \
    changeroleinteam.ui \
    create_organization.ui \
    createteampage.ui \
    creattask.ui \
    deletepeoplefromorganization.ui \
    deletepeoplefromteam.ui \
    edit_organization_page.ui \
    edittask.ui \
    editteampage.ui \
    forgetpassword_page.ui \
    login_page.ui \
    mainwindow.ui \
    project_page.ui \
    register_login_page.ui \
    sign_up.ui \
    task_page.ui \
    team_page.ui \
    vieworganization.ui \
    viewteams.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
