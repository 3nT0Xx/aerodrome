#ifndef ADMIN_PLANE_ACTION_SELECT_H
#define ADMIN_PLANE_ACTION_SELECT_H

#include <QWidget>

namespace Ui {
class admin_plane_action_select;
}

class admin_plane_action_select : public QWidget
{
    Q_OBJECT

public:
    explicit admin_plane_action_select(QWidget *parent = nullptr);
    ~admin_plane_action_select();

private slots:

    void on_close_clicked();

    void on_add_clicked();

    void on_remove_clicked();

private:
    Ui::admin_plane_action_select *ui;
};

#endif // ADMIN_PLANE_ACTION_SELECT_H
