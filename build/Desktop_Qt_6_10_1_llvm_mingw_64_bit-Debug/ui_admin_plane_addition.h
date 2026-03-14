/********************************************************************************
** Form generated from reading UI file 'admin_plane_addition.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PLANE_ADDITION_H
#define UI_ADMIN_PLANE_ADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_plane_addition
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *name_input;
    QLabel *label_2;
    QSpinBox *pricing_input;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *cancel;

    void setupUi(QWidget *admin_plane_addition)
    {
        if (admin_plane_addition->objectName().isEmpty())
            admin_plane_addition->setObjectName("admin_plane_addition");
        admin_plane_addition->resize(800, 600);
        verticalLayoutWidget = new QWidget(admin_plane_addition);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(80, 10, 651, 501));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        name_input = new QLineEdit(verticalLayoutWidget);
        name_input->setObjectName("name_input");

        verticalLayout->addWidget(name_input);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pricing_input = new QSpinBox(verticalLayoutWidget);
        pricing_input->setObjectName("pricing_input");
        pricing_input->setMaximum(1000);

        verticalLayout->addWidget(pricing_input);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        cancel = new QPushButton(verticalLayoutWidget);
        cancel->setObjectName("cancel");

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(admin_plane_addition);

        QMetaObject::connectSlotsByName(admin_plane_addition);
    } // setupUi

    void retranslateUi(QWidget *admin_plane_addition)
    {
        admin_plane_addition->setWindowTitle(QCoreApplication::translate("admin_plane_addition", "Form", nullptr));
        label->setText(QCoreApplication::translate("admin_plane_addition", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\260\320\274\320\276\320\273\321\221\321\202\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("admin_plane_addition", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \321\207\320\260\321\201\320\260 \320\260\321\200\320\265\320\275\320\264\321\213:", nullptr));
        accept->setText(QCoreApplication::translate("admin_plane_addition", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        cancel->setText(QCoreApplication::translate("admin_plane_addition", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_plane_addition: public Ui_admin_plane_addition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PLANE_ADDITION_H
