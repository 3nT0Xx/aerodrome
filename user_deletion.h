#ifndef USER_DELETION_H
#define USER_DELETION_H

#include <QWidget>

namespace Ui {
class user_deletion;
}

class user_deletion : public QWidget
{
    Q_OBJECT

public:
    explicit user_deletion(QWidget *parent = nullptr);
    ~user_deletion();

private slots:
    void on_cancel_clicked();
    void state_check();

    void on_login_input_textChanged();

    void on_accept_clicked();

private:
    Ui::user_deletion *ui;
};

#endif // USER_DELETION_H
