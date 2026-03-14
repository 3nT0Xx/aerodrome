/********************************************************************************
** Form generated from reading UI file 'user_deletion.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DELETION_H
#define UI_USER_DELETION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_deletion
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *login_input;
    QLabel *err_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *cancel;

    void setupUi(QWidget *user_deletion)
    {
        if (user_deletion->objectName().isEmpty())
            user_deletion->setObjectName("user_deletion");
        user_deletion->resize(800, 600);
        verticalLayoutWidget = new QWidget(user_deletion);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 741, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        login_input = new QLineEdit(verticalLayoutWidget);
        login_input->setObjectName("login_input");

        verticalLayout->addWidget(login_input);

        err_field = new QLabel(verticalLayoutWidget);
        err_field->setObjectName("err_field");

        verticalLayout->addWidget(err_field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        cancel = new QPushButton(verticalLayoutWidget);
        cancel->setObjectName("cancel");

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(user_deletion);

        QMetaObject::connectSlotsByName(user_deletion);
    } // setupUi

    void retranslateUi(QWidget *user_deletion)
    {
        user_deletion->setWindowTitle(QCoreApplication::translate("user_deletion", "Form", nullptr));
        label->setText(QCoreApplication::translate("user_deletion", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275 \321\203\320\264\320\260\320\273\321\217\320\265\320\274\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        err_field->setText(QString());
        accept->setText(QCoreApplication::translate("user_deletion", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        cancel->setText(QCoreApplication::translate("user_deletion", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_deletion: public Ui_user_deletion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DELETION_H
