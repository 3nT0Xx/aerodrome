#ifndef ADMIN_COORD_INPUT_H
#define ADMIN_COORD_INPUT_H

#include <QWidget>

namespace Ui {
class admin_coord_input;
}

class admin_coord_input : public QWidget
{
    Q_OBJECT

public:
    explicit admin_coord_input(QWidget *parent = nullptr);
    ~admin_coord_input();

private slots:
    void on_coord_confirm_clicked();

    void on_dismiss_clicked();

private:
    Ui::admin_coord_input *ui;
};

#endif // ADMIN_COORD_INPUT_H
