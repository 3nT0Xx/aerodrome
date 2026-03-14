/********************************************************************************
** Form generated from reading UI file 'accountant_price_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTANT_PRICE_CALC_H
#define UI_ACCOUNTANT_PRICE_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountant_price_calc
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *selected_usr_output;
    QLabel *res_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *quit;

    void setupUi(QWidget *accountant_price_calc)
    {
        if (accountant_price_calc->objectName().isEmpty())
            accountant_price_calc->setObjectName("accountant_price_calc");
        accountant_price_calc->resize(800, 600);
        verticalLayoutWidget = new QWidget(accountant_price_calc);
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


        retranslateUi(accountant_price_calc);

        QMetaObject::connectSlotsByName(accountant_price_calc);
    } // setupUi

    void retranslateUi(QWidget *accountant_price_calc)
    {
        accountant_price_calc->setWindowTitle(QCoreApplication::translate("accountant_price_calc", "Form", nullptr));
        selected_usr_output->setText(QString());
        res_field->setText(QString());
        accept->setText(QCoreApplication::translate("accountant_price_calc", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        quit->setText(QCoreApplication::translate("accountant_price_calc", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountant_price_calc: public Ui_accountant_price_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTANT_PRICE_CALC_H
