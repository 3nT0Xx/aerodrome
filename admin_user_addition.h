#ifndef ADMIN_USER_ADDITION_H
#define ADMIN_USER_ADDITION_H

#include <QWidget>

namespace Ui {
class admin_user_addition;
}

class admin_user_addition : public QWidget
{
    Q_OBJECT

public:
    explicit admin_user_addition(QWidget *parent = nullptr);
    ~admin_user_addition();

private slots:
    void on_dismiss_clicked();

    void on_accept_clicked();

    void check_button_state_user_addition();

    void on_login_input_textChanged();

    void on_password_input_textChanged();

private:
    Ui::admin_user_addition *ui;
};

#endif // ADMIN_USER_ADDITION_H
