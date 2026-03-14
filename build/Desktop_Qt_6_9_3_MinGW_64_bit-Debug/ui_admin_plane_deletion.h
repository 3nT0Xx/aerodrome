/********************************************************************************
** Form generated from reading UI file 'admin_plane_deletion.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PLANE_DELETION_H
#define UI_ADMIN_PLANE_DELETION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_plane_deletion
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *table;
    QLabel *label;
    QSpinBox *ID_input;
    QLabel *err_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *exit;

    void setupUi(QWidget *admin_plane_deletion)
    {
        if (admin_plane_deletion->objectName().isEmpty())
            admin_plane_deletion->setObjectName("admin_plane_deletion");
        admin_plane_deletion->resize(800, 600);
        verticalLayoutWidget = new QWidget(admin_plane_deletion);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 761, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        table = new QTableView(verticalLayoutWidget);
        table->setObjectName("table");

        verticalLayout->addWidget(table);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        ID_input = new QSpinBox(verticalLayoutWidget);
        ID_input->setObjectName("ID_input");

        verticalLayout->addWidget(ID_input);

        err_field = new QLabel(verticalLayoutWidget);
        err_field->setObjectName("err_field");

        verticalLayout->addWidget(err_field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        exit = new QPushButton(verticalLayoutWidget);
        exit->setObjectName("exit");

        horizontalLayout->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(admin_plane_deletion);

        QMetaObject::connectSlotsByName(admin_plane_deletion);
    } // setupUi

    void retranslateUi(QWidget *admin_plane_deletion)
    {
        admin_plane_deletion->setWindowTitle(QCoreApplication::translate("admin_plane_deletion", "Form", nullptr));
        label->setText(QCoreApplication::translate("admin_plane_deletion", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID \321\203\320\264\320\260\320\273\321\217\320\265\320\274\320\276\320\263\320\276 \321\201\320\260\320\274\320\276\320\273\321\221\321\202\320\260", nullptr));
        err_field->setText(QString());
        accept->setText(QCoreApplication::translate("admin_plane_deletion", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        exit->setText(QCoreApplication::translate("admin_plane_deletion", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_plane_deletion: public Ui_admin_plane_deletion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PLANE_DELETION_H
