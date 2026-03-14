/********************************************************************************
** Form generated from reading UI file 'admin_plane_action_select.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PLANE_ACTION_SELECT_H
#define UI_ADMIN_PLANE_ACTION_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_plane_action_select
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QPushButton *remove;
    QPushButton *close;

    void setupUi(QWidget *admin_plane_action_select)
    {
        if (admin_plane_action_select->objectName().isEmpty())
            admin_plane_action_select->setObjectName("admin_plane_action_select");
        admin_plane_action_select->resize(800, 600);
        verticalLayoutWidget = new QWidget(admin_plane_action_select);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 30, 751, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(verticalLayoutWidget);
        add->setObjectName("add");

        verticalLayout->addWidget(add);

        remove = new QPushButton(verticalLayoutWidget);
        remove->setObjectName("remove");

        verticalLayout->addWidget(remove);

        close = new QPushButton(verticalLayoutWidget);
        close->setObjectName("close");

        verticalLayout->addWidget(close);


        retranslateUi(admin_plane_action_select);

        QMetaObject::connectSlotsByName(admin_plane_action_select);
    } // setupUi

    void retranslateUi(QWidget *admin_plane_action_select)
    {
        admin_plane_action_select->setWindowTitle(QCoreApplication::translate("admin_plane_action_select", "Form", nullptr));
        add->setText(QCoreApplication::translate("admin_plane_action_select", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        remove->setText(QCoreApplication::translate("admin_plane_action_select", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        close->setText(QCoreApplication::translate("admin_plane_action_select", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_plane_action_select: public Ui_admin_plane_action_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PLANE_ACTION_SELECT_H
