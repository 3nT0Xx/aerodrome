/********************************************************************************
** Form generated from reading UI file 'payment_window.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_WINDOW_H
#define UI_PAYMENT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payment_window
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *payment_window)
    {
        if (payment_window->objectName().isEmpty())
            payment_window->setObjectName("payment_window");
        payment_window->resize(800, 600);
        verticalLayoutWidget = new QWidget(payment_window);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 791, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(payment_window);

        QMetaObject::connectSlotsByName(payment_window);
    } // setupUi

    void retranslateUi(QWidget *payment_window)
    {
        payment_window->setWindowTitle(QCoreApplication::translate("payment_window", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("payment_window", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("payment_window", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("payment_window", "\320\236\320\277\320\273\320\260\321\202\320\260 \321\201\320\276\320\262\320\265\321\200\321\210\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment_window: public Ui_payment_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_WINDOW_H
