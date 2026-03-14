#ifndef PILOT_WITH_REQUEST_H
#define PILOT_WITH_REQUEST_H

#include <QWidget>

namespace Ui {
class pilot_with_already_open_request;
}

class pilot_with_already_open_request : public QWidget
{
    Q_OBJECT

public:
    explicit pilot_with_already_open_request(QWidget *parent = nullptr, QString login = "", QString Latest_status = "");
    ~pilot_with_already_open_request();

private slots:
    void on_OK_clicked();

private:
    Ui::pilot_with_already_open_request *ui;
    void process_status(QString login, QString Latest_status);
};

#endif // PILOT_WITH_REQUEST_H
