/********************************************************************************
** Form generated from reading UI file 'admin_user_addition.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_USER_ADDITION_H
#define UI_ADMIN_USER_ADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_user_addition
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label;
    QComboBox *role_chooser;
    QLabel *label_3;
    QLineEdit *login_input;
    QLabel *label_2;
    QLineEdit *password_input;
    QLabel *error_field;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *dismiss;

    void setupUi(QWidget *admin_user_addition)
    {
        if (admin_user_addition->objectName().isEmpty())
            admin_user_addition->setObjectName("admin_user_addition");
        admin_user_addition->resize(800, 600);
        verticalLayoutWidget = new QWidget(admin_user_addition);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 20, 741, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        role_chooser = new QComboBox(verticalLayoutWidget);
        role_chooser->addItem(QString());
        role_chooser->addItem(QString());
        role_chooser->addItem(QString());
        role_chooser->setObjectName("role_chooser");
        role_chooser->setEditable(false);

        verticalLayout->addWidget(role_chooser);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        login_input = new QLineEdit(verticalLayoutWidget);
        login_input->setObjectName("login_input");

        verticalLayout->addWidget(login_input);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        password_input = new QLineEdit(verticalLayoutWidget);
        password_input->setObjectName("password_input");

        verticalLayout->addWidget(password_input);

        error_field = new QLabel(verticalLayoutWidget);
        error_field->setObjectName("error_field");

        verticalLayout->addWidget(error_field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName("accept");
        accept->setEnabled(true);

        horizontalLayout->addWidget(accept);

        dismiss = new QPushButton(verticalLayoutWidget);
        dismiss->setObjectName("dismiss");

        horizontalLayout->addWidget(dismiss);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(admin_user_addition);

        role_chooser->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(admin_user_addition);
    } // setupUi

    void retranslateUi(QWidget *admin_user_addition)
    {
        admin_user_addition->setWindowTitle(QCoreApplication::translate("admin_user_addition", "Form", nullptr));
        label->setText(QCoreApplication::translate("admin_user_addition", "\320\222\320\270\320\261\320\270\321\200\320\265\321\202\320\265 \321\200\320\276\320\273\321\214 \320\264\320\276\320\261\320\260\320\262\320\273\321\217\320\265\320\274\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        role_chooser->setItemText(0, QCoreApplication::translate("admin_user_addition", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        role_chooser->setItemText(1, QCoreApplication::translate("admin_user_addition", "\320\221\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200", nullptr));
        role_chooser->setItemText(2, QCoreApplication::translate("admin_user_addition", "\320\233\321\221\321\202\321\207\320\270\320\272", nullptr));

        role_chooser->setCurrentText(QCoreApplication::translate("admin_user_addition", "\320\221\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("admin_user_addition", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("admin_user_addition", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        error_field->setText(QString());
        accept->setText(QCoreApplication::translate("admin_user_addition", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        dismiss->setText(QCoreApplication::translate("admin_user_addition", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_user_addition: public Ui_admin_user_addition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_USER_ADDITION_H
