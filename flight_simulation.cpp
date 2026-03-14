#include "flight_simulation.h"
#include "ui_flight_simulation.h"
#include "loginwindow.h"
#include "DB_manager.h"
#include "pilot_with_request.h"
flight_simulation::flight_simulation(QWidget *parent, QString login)
    : QWidget(parent)
    , ui(new Ui::flight_simulation)
{
    ui->setupUi(this);
    local_login = login;
}

flight_simulation::~flight_simulation()
{
    delete ui;
}

void flight_simulation::on_close_clicked()
{
    LoginWindow *l = new LoginWindow();
    l->show();
    this->deleteLater();
}


void flight_simulation::on_accept_clicked()
{
    if (!is_on_aerodrome(ui->x_input->value(), ui->y_input->value()) && ui->v_input->value() == 0){
        change_request_status(local_login, "flight_finished");
        pilot_with_already_open_request *p = new pilot_with_already_open_request(nullptr,local_login, "flight_finished");
        p->show();
        this->deleteLater();
    }
}

