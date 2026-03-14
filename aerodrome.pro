QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DB_manager.cpp \
    accountant_price_calc.cpp \
    accountant_request.cpp \
    accountant_ui.cpp \
    admin_coord_input.cpp \
    admin_plane_action_select.cpp \
    admin_plane_addition.cpp \
    admin_plane_deletion.cpp \
    admin_ui.cpp \
    admin_user_addition.cpp \
    admin_user_edit_action_select.cpp \
    flight_simulation.cpp \
    main.cpp \
    loginwindow.cpp \
    payment_window.cpp \
    pilot_ui.cpp \
    pilot_with_request.cpp \
    plane.cpp \
    user_deletion.cpp

HEADERS += \
    DB_manager.h \
    accountant_price_calc.h \
    accountant_request.h \
    accountant_ui.h \
    admin_coord_input.h \
    admin_plane_action_select.h \
    admin_plane_addition.h \
    admin_plane_deletion.h \
    admin_ui.h \
    admin_user_addition.h \
    admin_user_edit_action_select.h \
    flight_simulation.h \
    loginwindow.h \
    payment_window.h \
    pilot_ui.h \
    pilot_with_request.h \
    plane.h \
    user_deletion.h

FORMS += \
    accountant_price_calc.ui \
    accountant_request.ui \
    accountant_ui.ui \
    admin_coord_input.ui \
    admin_plane_action_select.ui \
    admin_plane_addition.ui \
    admin_plane_deletion.ui \
    admin_ui.ui \
    admin_user_addition.ui \
    admin_user_edit_action_select.ui \
    flight_simulation.ui \
    loginwindow.ui \
    payment_window.ui \
    pilot_ui.ui \
    pilot_with_request.ui \
    user_deletion.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    accountant_db \
    admin_db \
    coords.txt \
    pilot_db \
    plane.db \
    plane_db.txt \
    request_base.txt \
    user_db.txt
