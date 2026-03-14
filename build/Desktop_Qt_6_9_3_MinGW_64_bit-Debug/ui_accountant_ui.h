/********************************************************************************
** Form generated from reading UI file 'accountant_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTANT_UI_H
#define UI_ACCOUNTANT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountant_ui
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *requests;
    QSpacerItem *verticalSpacer_2;
    QPushButton *paycalc;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *LogOut;

    void setupUi(QWidget *accountant_ui)
    {
        if (accountant_ui->objectName().isEmpty())
            accountant_ui->setObjectName("accountant_ui");
        accountant_ui->resize(800, 600);
        verticalLayoutWidget = new QWidget(accountant_ui);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 781, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        requests = new QPushButton(verticalLayoutWidget);
        requests->setObjectName("requests");

        verticalLayout->addWidget(requests);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        paycalc = new QPushButton(verticalLayoutWidget);
        paycalc->setObjectName("paycalc");

        verticalLayout->addWidget(paycalc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        LogOut = new QPushButton(verticalLayoutWidget);
        LogOut->setObjectName("LogOut");

        horizontalLayout->addWidget(LogOut);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(accountant_ui);

        QMetaObject::connectSlotsByName(accountant_ui);
    } // setupUi

    void retranslateUi(QWidget *accountant_ui)
    {
        accountant_ui->setWindowTitle(QCoreApplication::translate("accountant_ui", "Form", nullptr));
        requests->setText(QCoreApplication::translate("accountant_ui", "\320\240\320\260\321\201\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        paycalc->setText(QCoreApplication::translate("accountant_ui", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\276\320\277\320\273\320\260\321\202\321\203", nullptr));
        LogOut->setText(QCoreApplication::translate("accountant_ui", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountant_ui: public Ui_accountant_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTANT_UI_H
