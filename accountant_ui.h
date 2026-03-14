#ifndef ACCOUNTANT_UI_H
#define ACCOUNTANT_UI_H

#include <QWidget>

namespace Ui {
class accountant_ui;
}

class accountant_ui : public QWidget
{
    Q_OBJECT

public:
    explicit accountant_ui(QWidget *parent = nullptr);
    ~accountant_ui();

private slots:
    void on_requests_clicked();

    void on_LogOut_clicked();

    void on_paycalc_clicked();

private:
    Ui::accountant_ui *ui;
    void fill_table();
};

#endif // ACCOUNTANT_UI_H
