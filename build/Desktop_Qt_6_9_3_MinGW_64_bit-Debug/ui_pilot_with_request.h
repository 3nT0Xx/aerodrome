/********************************************************************************
** Form generated from reading UI file 'pilot_with_request.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PILOT_WITH_REQUEST_H
#define UI_PILOT_WITH_REQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pilot_with_already_open_request
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *OK;

    void setupUi(QWidget *pilot_with_already_open_request)
    {
        if (pilot_with_already_open_request->objectName().isEmpty())
            pilot_with_already_open_request->setObjectName("pilot_with_already_open_request");
        pilot_with_already_open_request->resize(800, 600);
        verticalLayoutWidget = new QWidget(pilot_with_already_open_request);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 771, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        OK = new QPushButton(verticalLayoutWidget);
        OK->setObjectName("OK");

        horizontalLayout->addWidget(OK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(pilot_with_already_open_request);

        QMetaObject::connectSlotsByName(pilot_with_already_open_request);
    } // setupUi

    void retranslateUi(QWidget *pilot_with_already_open_request)
    {
        pilot_with_already_open_request->setWindowTitle(QCoreApplication::translate("pilot_with_already_open_request", "Form", nullptr));
        label->setText(QCoreApplication::translate("pilot_with_already_open_request", "TextLabel", nullptr));
        OK->setText(QCoreApplication::translate("pilot_with_already_open_request", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pilot_with_already_open_request: public Ui_pilot_with_already_open_request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILOT_WITH_REQUEST_H
