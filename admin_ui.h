#ifndef ADMIN_UI_H
#define ADMIN_UI_H

#include <QWidget>

namespace Ui {
class admin_ui;
}

class admin_ui : public QWidget
{
    Q_OBJECT

public:
    explicit admin_ui(QWidget *parent = nullptr);
    ~admin_ui();

private slots:
    void on_lane_coord_Button_clicked();

    void on_user_list_Button_clicked();

    void on_logout_clicked();

    void on_exit_clicked();

    void on_plane_list_Button_clicked();

private:
    Ui::admin_ui *ui;
};

#endif // ADMIN_UI_H
