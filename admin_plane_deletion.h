#ifndef ADMIN_PLANE_DELETION_H
#define ADMIN_PLANE_DELETION_H

#include <QWidget>

namespace Ui {
class admin_plane_deletion;
}

class admin_plane_deletion : public QWidget
{
    Q_OBJECT

public:
    explicit admin_plane_deletion(QWidget *parent = nullptr);
    ~admin_plane_deletion();

private slots:
    void on_exit_clicked();

    void on_ID_input_valueChanged();

    void on_accept_clicked();

private:
    Ui::admin_plane_deletion *ui;
    void accept_state_check();
};

#endif // ADMIN_PLANE_DELETION_H
