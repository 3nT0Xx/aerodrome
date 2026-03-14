#ifndef ADMIN_USER_EDIT_ACTION_SELECT_H
#define ADMIN_USER_EDIT_ACTION_SELECT_H

#include <QWidget>

namespace Ui {
class admin_user_edit_action_select;
}

class admin_user_edit_action_select : public QWidget
{
    Q_OBJECT

public:
    explicit admin_user_edit_action_select(QWidget *parent = nullptr);
    ~admin_user_edit_action_select();

private slots:
    void on_add_user_clicked();

    void on_cancel_clicked();

    void on_delete_user_clicked();

private:
    Ui::admin_user_edit_action_select *ui;
};

#endif // ADMIN_USER_EDIT_ACTION_SELECT_H
