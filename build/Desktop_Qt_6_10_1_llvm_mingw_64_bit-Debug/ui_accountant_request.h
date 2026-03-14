/********************************************************************************
** Form generated from reading UI file 'accountant_request.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTANT_REQUEST_H
#define UI_ACCOUNTANT_REQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountant_request
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *selected_usr_output;
    QComboBox *verdict_select;
    QLabel *res_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *quit;

    void setupUi(QWidget *accountant_request)
    {
        if (accountant_request->objectName().isEmpty())
            accountant_request->setObjectName("accountant_request");
        accountant_request->resize(800, 600);
        verticalLayoutWidget = new QWidget(accountant_request);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 781, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        selected_usr_output = new QLabel(verticalLayoutWidget);
        selected_usr_output->setObjectName("selected_usr_output");

        verticalLayout->addWidget(selected_usr_output);

        verdict_select = new QComboBox(verticalLayoutWidget);
        verdict_select->addItem(QString());
        verdict_select->addItem(QString());
        verdict_select->setObjectName("verdict_select");

        verticalLayout->addWidget(verdict_select);

        res_field = new QLabel(verticalLayoutWidget);
        res_field->setObjectName("res_field");

        verticalLayout->addWidget(res_field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        quit = new QPushButton(verticalLayoutWidget);
        quit->setObjectName("quit");

        horizontalLayout->addWidget(quit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(accountant_request);

        QMetaObject::connectSlotsByName(accountant_request);
    } // setupUi

    void retranslateUi(QWidget *accountant_request)
    {
        accountant_request->setWindowTitle(QCoreApplication::translate("accountant_request", "Form", nullptr));
        selected_usr_output->setText(QString());
        verdict_select->setItemText(0, QCoreApplication::translate("accountant_request", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        verdict_select->setItemText(1, QCoreApplication::translate("accountant_request", "\320\236\321\202\320\272\320\273\320\276\320\275\320\270\321\202\321\214", nullptr));

        res_field->setText(QString());
        accept->setText(QCoreApplication::translate("accountant_request", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        quit->setText(QCoreApplication::translate("accountant_request", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountant_request: public Ui_accountant_request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTANT_REQUEST_H
