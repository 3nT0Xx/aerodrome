/********************************************************************************
** Form generated from reading UI file 'admin_coord_input.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_COORD_INPUT_H
#define UI_ADMIN_COORD_INPUT_H

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

class Ui_admin_coord_input
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDoubleSpinBox *x1_input;
    QLabel *label_2;
    QDoubleSpinBox *y1_input;
    QLabel *label_4;
    QDoubleSpinBox *x1_input_2;
    QLabel *label_3;
    QDoubleSpinBox *y1_input_2;
    QLabel *label_6;
    QDoubleSpinBox *x1_input_3;
    QLabel *label_5;
    QDoubleSpinBox *y1_input_3;
    QLabel *err_field;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *coord_confirm;
    QPushButton *dismiss;

    void setupUi(QWidget *admin_coord_input)
    {
        if (admin_coord_input->objectName().isEmpty())
            admin_coord_input->setObjectName("admin_coord_input");
        admin_coord_input->resize(800, 600);
        verticalLayoutWidget = new QWidget(admin_coord_input);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 20, 741, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        x1_input = new QDoubleSpinBox(verticalLayoutWidget);
        x1_input->setObjectName("x1_input");
        x1_input->setMinimum(-1000.000000000000000);
        x1_input->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(x1_input);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        y1_input = new QDoubleSpinBox(verticalLayoutWidget);
        y1_input->setObjectName("y1_input");
        y1_input->setMinimum(-1000.000000000000000);
        y1_input->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(y1_input);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        x1_input_2 = new QDoubleSpinBox(verticalLayoutWidget);
        x1_input_2->setObjectName("x1_input_2");
        x1_input_2->setMinimum(-1000.000000000000000);
        x1_input_2->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(x1_input_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        y1_input_2 = new QDoubleSpinBox(verticalLayoutWidget);
        y1_input_2->setObjectName("y1_input_2");
        y1_input_2->setMinimum(-1000.000000000000000);
        y1_input_2->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(y1_input_2);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        x1_input_3 = new QDoubleSpinBox(verticalLayoutWidget);
        x1_input_3->setObjectName("x1_input_3");
        x1_input_3->setMinimum(-1000.000000000000000);
        x1_input_3->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(x1_input_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        y1_input_3 = new QDoubleSpinBox(verticalLayoutWidget);
        y1_input_3->setObjectName("y1_input_3");
        y1_input_3->setMinimum(-1000.000000000000000);
        y1_input_3->setMaximum(1000.000000000000000);

        verticalLayout->addWidget(y1_input_3);

        err_field = new QLabel(verticalLayoutWidget);
        err_field->setObjectName("err_field");

        verticalLayout->addWidget(err_field);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        coord_confirm = new QPushButton(verticalLayoutWidget);
        coord_confirm->setObjectName("coord_confirm");

        horizontalLayout->addWidget(coord_confirm);

        dismiss = new QPushButton(verticalLayoutWidget);
        dismiss->setObjectName("dismiss");

        horizontalLayout->addWidget(dismiss);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(admin_coord_input);

        QMetaObject::connectSlotsByName(admin_coord_input);
    } // setupUi

    void retranslateUi(QWidget *admin_coord_input)
    {
        admin_coord_input->setWindowTitle(QCoreApplication::translate("admin_coord_input", "Form", nullptr));
        label->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 x1", nullptr));
        label_2->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 y1", nullptr));
        label_4->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 x2", nullptr));
        label_3->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 y2", nullptr));
        label_6->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 x3", nullptr));
        label_5->setText(QCoreApplication::translate("admin_coord_input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\203 y3", nullptr));
        err_field->setText(QString());
        coord_confirm->setText(QCoreApplication::translate("admin_coord_input", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        dismiss->setText(QCoreApplication::translate("admin_coord_input", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_coord_input: public Ui_admin_coord_input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_COORD_INPUT_H
