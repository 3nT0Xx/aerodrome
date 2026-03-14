/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Full_Layout;
    QLabel *Login_label;
    QLineEdit *login_intput;
    QLabel *Password_label;
    QLineEdit *password_input;
    QLabel *error_line;
    QSpacerItem *Buttons_spacer;
    QHBoxLayout *Bottom_buttons_layout;
    QPushButton *Login_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 50, 671, 421));
        Full_Layout = new QVBoxLayout(verticalLayoutWidget);
        Full_Layout->setObjectName("Full_Layout");
        Full_Layout->setContentsMargins(0, 0, 0, 0);
        Login_label = new QLabel(verticalLayoutWidget);
        Login_label->setObjectName("Login_label");

        Full_Layout->addWidget(Login_label);

        login_intput = new QLineEdit(verticalLayoutWidget);
        login_intput->setObjectName("login_intput");

        Full_Layout->addWidget(login_intput);

        Password_label = new QLabel(verticalLayoutWidget);
        Password_label->setObjectName("Password_label");

        Full_Layout->addWidget(Password_label);

        password_input = new QLineEdit(verticalLayoutWidget);
        password_input->setObjectName("password_input");

        Full_Layout->addWidget(password_input);

        error_line = new QLabel(verticalLayoutWidget);
        error_line->setObjectName("error_line");

        Full_Layout->addWidget(error_line);

        Buttons_spacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        Full_Layout->addItem(Buttons_spacer);

        Bottom_buttons_layout = new QHBoxLayout();
        Bottom_buttons_layout->setObjectName("Bottom_buttons_layout");
        Login_Button = new QPushButton(verticalLayoutWidget);
        Login_Button->setObjectName("Login_Button");

        Bottom_buttons_layout->addWidget(Login_Button);


        Full_Layout->addLayout(Bottom_buttons_layout);

        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        Login_label->setText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        Password_label->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        error_line->setText(QString());
        Login_Button->setText(QCoreApplication::translate("LoginWindow", "\320\222\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
