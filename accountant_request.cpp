#include "accountant_request.h"
#include "ui_accountant_request.h"
#include <QStandardItem>
#include <QDebug>
#include "accountant_ui.h"
#include "DB_manager.h"


void accountant_request::fill_table(){
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_open_request_db();
    QStandardItemModel *m = new QStandardItemModel();
    for (auto request: req_db){
        m->appendRow({new QStandardItem(request[USR_LOGIN]), new QStandardItem(request[PLANE_ID])});
    }
    m->setHorizontalHeaderItem(0, new QStandardItem("Логин пользователя"));
    m->setHorizontalHeaderItem(1, new QStandardItem("ID самолёта"));
    ui->tableView->setModel(m);
}

accountant_request::accountant_request(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::accountant_request)
{
    ui->setupUi(this);
    fill_table();
}

accountant_request::~accountant_request()
{
    delete ui;
}

void accountant_request::on_tableView_clicked(const QModelIndex &index)
{
    selected_row = index.row();
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_open_request_db();
    ui->selected_usr_output->setText("Выбранный пользователь: " + req_db[selected_row][USR_LOGIN]);
}


void accountant_request::on_quit_clicked()
{
    accountant_ui *ac = new accountant_ui;
    ac->show();
    this->deleteLater();
}


void accountant_request::on_accept_clicked()
{
    enum req_enum {PLANE_ID = 0, USR_LOGIN, STATUS};
    std::vector<std::vector<QString>> req_db;
    req_db = get_open_request_db();bool ok;
    std::vector<QString> verdicts = {"satisfied","denied"};
    if (change_request_status(req_db[selected_row][USR_LOGIN], verdicts[ui->verdict_select->currentIndex()])){
        change_plane_status(req_db[selected_row][PLANE_ID].toInt(&ok, 10), "occupied");
        ui->res_field->setText("Операция успешна");
        req_db = get_open_request_db();
        fill_table();
    } else {
        ui->res_field->setText("Что-то пошло не так...");
    }
}

