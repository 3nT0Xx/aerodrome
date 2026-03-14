#ifndef ACCOUNTANT_PRICE_CALC_H
#define ACCOUNTANT_PRICE_CALC_H

#include <QWidget>

namespace Ui {
class accountant_price_calc;
}

class accountant_price_calc : public QWidget
{
    Q_OBJECT

public:
    explicit accountant_price_calc(QWidget *parent = nullptr);
    ~accountant_price_calc();

private slots:

    void on_tableView_clicked(const QModelIndex &index);
    void on_quit_clicked();
    void on_accept_clicked();

private:
    Ui::accountant_price_calc *ui;
    void fill_table();
    int selected_row;
};

#endif // ACCOUNTANT_PRICE_CALC_H
