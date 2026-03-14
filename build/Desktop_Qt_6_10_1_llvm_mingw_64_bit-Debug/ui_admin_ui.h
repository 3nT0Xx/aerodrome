/********************************************************************************
** Form generated from reading UI file 'admin_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_UI_H
#define UI_ADMIN_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_ui
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *plane_list_Button;
    QSpacerItem *verticalSpacer_3;
    QPushButton *user_list_Button;
    QSpacerItem *verticalSpacer_2;
    QPushButton *lane_coord_Button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *logout;
    QPushButton *exit;

    void setupUi(QWidget *admin_ui)
    {
        if (admin_ui->objectName().isEmpty())
            admin_ui->setObjectName("admin_ui");
        admin_ui->resize(800, 400);
        verticalLayoutWidget = new QWidget(admin_ui);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 30, 641, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plane_list_Button = new QPushButton(verticalLayoutWidget);
        plane_list_Button->setObjectName("plane_list_Button");

        verticalLayout->addWidget(plane_list_Button);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        user_list_Button = new QPushButton(verticalLayoutWidget);
        user_list_Button->setObjectName("user_list_Button");

        verticalLayout->addWidget(user_list_Button);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        lane_coord_Button = new QPushButton(verticalLayoutWidget);
        lane_coord_Button->setObjectName("lane_coord_Button");

        verticalLayout->addWidget(lane_coord_Button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        logout = new QPushButton(verticalLayoutWidget);
        logout->setObjectName("logout");

        horizontalLayout->addWidget(logout);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName("exit");

        horizontalLayout->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(admin_ui);

        QMetaObject::connectSlotsByName(admin_ui);
    } // setupUi

    void retranslateUi(QWidget *admin_ui)
    {
        admin_ui->setWindowTitle(QCoreApplication::translate("admin_ui", "Form", nullptr));
        plane_list_Button->setText(QCoreApplication::translate("admin_ui", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\260\320\274\320\276\320\273\321\221\321\202\320\276\320\262", nullptr));
        user_list_Button->setText(QCoreApplication::translate("admin_ui", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        lane_coord_Button->setText(QCoreApplication::translate("admin_ui", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\222\320\237\320\237", nullptr));
        logout->setText(QCoreApplication::translate("admin_ui", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \321\203\321\207\321\221\321\202\320\275\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        exit->setText(QCoreApplication::translate("admin_ui", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_ui: public Ui_admin_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_UI_H
