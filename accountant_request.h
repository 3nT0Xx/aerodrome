#ifndef ACCOUNTANT_REQUEST_H
#define ACCOUNTANT_REQUEST_H

#include <QWidget>

namespace Ui {
class accountant_request;
}

class accountant_request : public QWidget
{
    Q_OBJECT

public:
    explicit accountant_request(QWidget *parent = nullptr);
    ~accountant_request();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_quit_clicked();

    void on_accept_clicked();

private:
    Ui::accountant_request *ui;
    void fill_table();
    int selected_row = -1;

};

#endif // ACCOUNTANT_REQUEST_H
