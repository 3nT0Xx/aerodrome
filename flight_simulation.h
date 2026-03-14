#ifndef FLIGHT_SIMULATION_H
#define FLIGHT_SIMULATION_H

#include <QWidget>

namespace Ui {
class flight_simulation;
}

class flight_simulation : public QWidget
{
    Q_OBJECT

public:
    explicit flight_simulation(QWidget *parent = nullptr, QString Login = "");
    ~flight_simulation();

private slots:
    void on_close_clicked();

    void on_accept_clicked();

private:
    Ui::flight_simulation *ui;
    QString local_login;
};

#endif // FLIGHT_SIMULATION_H
