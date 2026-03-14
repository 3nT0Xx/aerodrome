#include "pilot_with_request.h"
#include "ui_pilot_with_request.h"
#include "DB_manager.h"
#include "loginwindow.h"
#include "flight_simulation.h"
#include "pilot_ui.h"
#include "payment_window.h"
void pilot_with_already_open_request::process_status(QString login, QString Latest_status){
    if (Latest_status == "none"){
        pilot_ui *p = new pilot_ui(nullptr, login);
        p->show();
        this->deleteLater();
    }
    else if (Latest_status == "denied"){
        QString Text = "Уважаемый " + login + ",\n К сожалению, Вам было отказано в аренде. Пожалуйста, попробуйте снова";
        ui->label->setText(Text);
        change_request_status(login, "closed");
        return;
    } else if (Latest_status == "open"){
        QString Text = "Уважаемый " + login + ",\n Пожалуйста, ожидайте решения по Вашей заявке";
        ui->label->setText(Text);
        return;
    } else if (Latest_status == "satisfied"){
        flight_simulation *sim = new flight_simulation(nullptr, login);
        sim->show();
        this->deleteLater();
        return;
    } else if (Latest_status == "flight_finished"){
        QString Text = "Уважаемый " + login + ",\n Пожалуйста, ожидайте рассчёта стоимости Вашего полёта";
        ui->label->setText(Text);
        return;
    } else if (Latest_status == "awaiting_payment"){
        payment_window *pw = new payment_window(login);
        pw->show();
        this->deleteLater();
        return;
    } else {
        QString Text = "Уважаемый " + login + ",\n Что-то пошло не так ";
        ui->label->setText(Text);
    }
}

pilot_with_already_open_request::pilot_with_already_open_request(QWidget *parent,  QString login, QString Latest_status)
    : QWidget(parent)
    , ui(new Ui::pilot_with_already_open_request)
{
    ui->setupUi(this);
    process_status(login, Latest_status);
}

pilot_with_already_open_request::~pilot_with_already_open_request()
{
    delete ui;
}

void pilot_with_already_open_request::on_OK_clicked()
{
    LoginWindow *l = new LoginWindow();
    l->show();
    this->deleteLater();
}

