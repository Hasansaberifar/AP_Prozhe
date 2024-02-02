QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Organization_Page.cpp \
    addmembertoproject.cpp \
    addpeopleorganization.cpp \
    addpeopletoteam.cpp \
    assignatasktoaperson.cpp \
    assignatasktoaproject.cpp \
    assignatasktotheteam.cpp \
    changeroleinorganization.cpp \
    changeroleinteam.cpp \
    changestatus.cpp \
    create_organization.cpp \
    createproject.cpp \
    createteampage.cpp \
    creattask.cpp \
    deletepeoplefromorganization.cpp \
    deletepeoplefromteam.cpp \
    deleteproject.cpp \
    deletetask.cpp \
    edit_organization_page.cpp \
    editproject.cpp \
    edittask.cpp \
    editteampage.cpp \
    forgetpassword_page.cpp \
    login_page.cpp \
    main.cpp \
    mainwindow.cpp \
    project_class.cpp \
    project_page.cpp \
    register_login_page.cpp \
    removememberfromproject.cpp \
    setdate.cpp \
    sign_up.cpp \
    task_class.cpp \
    task_page.cpp \
    team_page.cpp \
    viewmemberproject.cpp \
    vieworganization.cpp \
    viewteams.cpp

HEADERS += \
    Organization_Page.h \
    addmembertoproject.h \
    addpeopleorganization.h \
    addpeopletoteam.h \
    assignatasktoaperson.h \
    assignatasktoaproject.h \
    assignatasktotheteam.h \
    changeroleinorganization.h \
    changeroleinteam.h \
    changestatus.h \
    create_organization.h \
    createproject.h \
    createteampage.h \
    creattask.h \
    deletepeoplefromorganization.h \
    deletepeoplefromteam.h \
    deleteproject.h \
    deletetask.h \
    edit_organization_page.h \
    editproject.h \
    edittask.h \
    editteampage.h \
    forgetpassword_page.h \
    login_page.h \
    mainwindow.h \
    project_class.h \
    project_page.h \
    register_login_page.h \
    removememberfromproject.h \
    setdate.h \
    sign_up.h \
    task_class.h \
    task_page.h \
    team_page.h \
    viewmemberproject.h \
    vieworganization.h \
    viewteams.h

FORMS += \
    Organization_Page.ui \
    addmembertoproject.ui \
    addpeopleorganization.ui \
    addpeopletoteam.ui \
    assignatasktoaperson.ui \
    assignatasktoaproject.ui \
    assignatasktotheteam.ui \
    changeroleinorganization.ui \
    changeroleinteam.ui \
    changestatus.ui \
    create_organization.ui \
    createproject.ui \
    createteampage.ui \
    creattask.ui \
    deletepeoplefromorganization.ui \
    deletepeoplefromteam.ui \
    deleteproject.ui \
    deletetask.ui \
    edit_organization_page.ui \
    editproject.ui \
    edittask.ui \
    editteampage.ui \
    forgetpassword_page.ui \
    login_page.ui \
    mainwindow.ui \
    project_page.ui \
    register_login_page.ui \
    removememberfromproject.ui \
    setdate.ui \
    sign_up.ui \
    task_page.ui \
    team_page.ui \
    viewmemberproject.ui \
    vieworganization.ui \
    viewteams.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
