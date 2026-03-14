#ifndef ADMIN_PLANE_ADDITION_H
#define ADMIN_PLANE_ADDITION_H

#include <QWidget>

namespace Ui {
class admin_plane_addition;
}

class admin_plane_addition : public QWidget
{
    Q_OBJECT

public:
    explicit admin_plane_addition(QWidget *parent = nullptr);
    ~admin_plane_addition();

private slots:
    void on_cancel_clicked();
    void check_button_state_plane_addition();

    void on_name_input_textChanged();

    void on_pricing_input_valueChanged();

    void on_accept_clicked();

private:
    Ui::admin_plane_addition *ui;
};

#endif // ADMIN_PLANE_ADDITION_H
