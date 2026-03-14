#include "accountant_ui.h"
#include "ui_accountant_ui.h"
#include "accountant_request.h"
#include "loginwindow.h"
#include "accountant_price_calc.h"
accountant_ui::accountant_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::accountant_ui)
{
    ui->setupUi(this);

}

accountant_ui::~accountant_ui()
{
    delete ui;
}



void accountant_ui::on_requests_clicked()
{
    accountant_request *req = new accountant_request();
    req->show();
    this->deleteLater();
}


void accountant_ui::on_LogOut_clicked()
{
    LoginWindow *l = new LoginWindow();
    l->show();
    this->deleteLater();
}


void accountant_ui::on_paycalc_clicked()
{
    accountant_price_calc *pc = new accountant_price_calc();
    pc->show();
    this->deleteLater();
}

