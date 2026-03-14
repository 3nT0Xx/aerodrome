/********************************************************************************
** Form generated from reading UI file 'pilot_ui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PILOT_UI_H
#define UI_PILOT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pilot_ui
{
public:
    QTableView *available_plane_view;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *close;
    QLabel *err_field;

    void setupUi(QWidget *pilot_ui)
    {
        if (pilot_ui->objectName().isEmpty())
            pilot_ui->setObjectName("pilot_ui");
        pilot_ui->resize(800, 600);
        available_plane_view = new QTableView(pilot_ui);
        available_plane_view->setObjectName("available_plane_view");
        available_plane_view->setGeometry(QRect(70, 30, 641, 391));
        available_plane_view->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        horizontalLayoutWidget = new QWidget(pilot_ui);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 460, 631, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        accept = new QPushButton(horizontalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        close = new QPushButton(horizontalLayoutWidget);
        close->setObjectName("close");

        horizontalLayout->addWidget(close);

        err_field = new QLabel(pilot_ui);
        err_field->setObjectName("err_field");
        err_field->setGeometry(QRect(80, 430, 371, 21));

        retranslateUi(pilot_ui);

        QMetaObject::connectSlotsByName(pilot_ui);
    } // setupUi

    void retranslateUi(QWidget *pilot_ui)
    {
        pilot_ui->setWindowTitle(QCoreApplication::translate("pilot_ui", "Form", nullptr));
        accept->setText(QCoreApplication::translate("pilot_ui", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        close->setText(QCoreApplication::translate("pilot_ui", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        err_field->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pilot_ui: public Ui_pilot_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILOT_UI_H
