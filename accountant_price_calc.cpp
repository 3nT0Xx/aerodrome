#include "accountant_price_calc.h"
#include "ui_accountant_price_calc.h"
#include "DB_manager.h"
#include <QStandardItem>
#include "accountant_ui.h"

void accountant_price_calc::fill_table(){
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_flight_finished_request_db();
    QStandardItemModel *m = new QStandardItemModel();
    for (auto request: req_db){
        m->appendRow({new QStandardItem(request[USR_LOGIN]), new QStandardItem(request[PLANE_ID])});
    }
    m->setHorizontalHeaderItem(0, new QStandardItem("Логин пользователя"));
    m->setHorizontalHeaderItem(1, new QStandardItem("ID самолёта"));
    ui->tableView->setModel(m);
}


accountant_price_calc::accountant_price_calc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::accountant_price_calc)
{
    ui->setupUi(this);
    fill_table();
}

accountant_price_calc::~accountant_price_calc()
{
    delete ui;
}

void accountant_price_calc::on_tableView_clicked(const QModelIndex &index)
{
    selected_row = index.row();
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_flight_finished_request_db();
    ui->selected_usr_output->setText("Выбранный пользователь: " + req_db[selected_row][USR_LOGIN]);
}


void accountant_price_calc::on_quit_clicked()
{
    accountant_ui *ac = new accountant_ui;
    ac->show();
    this->deleteLater();
}


void accountant_price_calc::on_accept_clicked()
{
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_flight_finished_request_db();bool ok;
    if (change_request_status(req_db[selected_row][USR_LOGIN], "awaiting_payment")){
        change_plane_status(req_db[selected_row][PLANE_ID].toInt(&ok, 10), "available");
        ui->res_field->setText("Операция успешна");
        req_db = get_open_request_db();
        fill_table();
    } else {
        ui->res_field->setText("Что-то пошло не так...");
    }
}
