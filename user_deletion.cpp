#include "user_deletion.h"
#include "ui_user_deletion.h"
#include "admin_user_edit_action_select.h"
#include "DB_manager.h"
#include <QTableView>
#include <QStandardItemModel>
QStandardItemModel *table_fill(){
    QStandardItemModel *u_m = new QStandardItemModel();
    std::vector<std::vector<QString>> user_list = get_user_list();
    for (std::vector<QString> v: user_list){
        u_m->appendRow({new QStandardItem(v[0]),new QStandardItem(v[1])});
    }
    u_m->setHorizontalHeaderItem(0,new QStandardItem("Логин"));
    u_m->setHorizontalHeaderItem(1,new QStandardItem("Уровень доступа"));
    return u_m;
}

user_deletion::user_deletion(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::user_deletion)
{
    ui->setupUi(this);
    ui->accept->setEnabled(false);
    ui->tableView->setModel(table_fill());
    ui->tableView->setColumnWidth(0,370);
    ui->tableView->setColumnWidth(1,370);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

user_deletion::~user_deletion()
{
    delete ui;
}

void user_deletion::on_cancel_clicked()
{
    admin_user_edit_action_select *s = new admin_user_edit_action_select();
    s->show();
    this->deleteLater();
}

void user_deletion::state_check(){
    if (!ui->login_input->text().trimmed().isEmpty()){
        ui->accept->setEnabled(true);
        ui->accept->clearFocus();
    } else {
        ui->accept->setEnabled(false);
    }
}

void user_deletion::on_login_input_textChanged()
{
    state_check();
}


void user_deletion::on_accept_clicked()
{
    if (!(delete_user(ui->login_input->text().trimmed()))){
        ui->err_field->setStyleSheet("color: red;");
        ui->err_field->setText("Пользователя с таким логином нет в базе данных!");
    }
    else {
        ui->tableView->setModel(table_fill());
        ui->login_input->clear();
    }
}

