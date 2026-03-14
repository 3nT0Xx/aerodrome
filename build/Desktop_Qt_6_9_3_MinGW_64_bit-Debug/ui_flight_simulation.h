/********************************************************************************
** Form generated from reading UI file 'flight_simulation.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHT_SIMULATION_H
#define UI_FLIGHT_SIMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flight_simulation
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *x_input;
    QLabel *label;
    QDoubleSpinBox *y_input;
    QLabel *label_3;
    QDoubleSpinBox *v_input;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *flight_simulation)
    {
        if (flight_simulation->objectName().isEmpty())
            flight_simulation->setObjectName("flight_simulation");
        flight_simulation->resize(800, 600);
        verticalLayoutWidget = new QWidget(flight_simulation);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 801, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        x_input = new QDoubleSpinBox(verticalLayoutWidget);
        x_input->setObjectName("x_input");
        x_input->setMinimum(-1000.000000000000000);
        x_input->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(x_input);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        y_input = new QDoubleSpinBox(verticalLayoutWidget);
        y_input->setObjectName("y_input");
        y_input->setMinimum(-1000.000000000000000);
        y_input->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(y_input);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        v_input = new QDoubleSpinBox(verticalLayoutWidget);
        v_input->setObjectName("v_input");
        v_input->setMaximum(500.000000000000000);

        verticalLayout->addWidget(v_input);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        close = new QPushButton(verticalLayoutWidget);
        close->setObjectName("close");

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(flight_simulation);

        QMetaObject::connectSlotsByName(flight_simulation);
    } // setupUi

    void retranslateUi(QWidget *flight_simulation)
    {
        flight_simulation->setWindowTitle(QCoreApplication::translate("flight_simulation", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("flight_simulation", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 x", nullptr));
        label->setText(QCoreApplication::translate("flight_simulation", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 y", nullptr));
        label_3->setText(QCoreApplication::translate("flight_simulation", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("flight_simulation", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        close->setText(QCoreApplication::translate("flight_simulation", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flight_simulation: public Ui_flight_simulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHT_SIMULATION_H
