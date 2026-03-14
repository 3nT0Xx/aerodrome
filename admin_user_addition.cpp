#include "admin_user_addition.h"
#include "ui_admin_user_addition.h"
#include "DB_manager.h"
#include "admin_user_edit_action_select.h"
#include <QStandardItem>

QStandardItemModel *table_fill_2(){
    QStandardItemModel *u_m = new QStandardItemModel();
    std::vector<std::vector<QString>> user_list = get_user_list();
    for (std::vector<QString> v: user_list){
        u_m->appendRow({new QStandardItem(v[0]),new QStandardItem(v[1])});
    }
    u_m->setHorizontalHeaderItem(0,new QStandardItem("Логин"));
    u_m->setHorizontalHeaderItem(1,new QStandardItem("Уровень доступа"));
    return u_m;
}

admin_user_addition::admin_user_addition(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_user_addition)
{
    ui->setupUi(this);
    ui->accept->setEnabled(false);
    ui->accept->setEnabled(false);
    ui->tableView->setModel(table_fill_2());
    ui->tableView->setColumnWidth(0,370);
    ui->tableView->setColumnWidth(1,370);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

admin_user_addition::~admin_user_addition()
{
    delete ui;
}


void admin_user_addition::on_dismiss_clicked()
{
    admin_user_edit_action_select *a = new admin_user_edit_action_select();
    a->show();
    this->deleteLater();

}

void admin_user_addition::check_button_state_user_addition(){
    if (!ui->login_input->text().trimmed().isEmpty() && !ui->password_input->text().trimmed().isEmpty()){
        ui->accept->setEnabled(true);
        ui->accept->clearFocus();
    } else {ui->accept->setEnabled(false);}
}

void admin_user_addition::on_login_input_textChanged()
{
    check_button_state_user_addition();
}


void admin_user_addition::on_password_input_textChanged()
{
    check_button_state_user_addition();
}


void admin_user_addition::on_accept_clicked()
{
    switch(ui->role_chooser->currentIndex()){
    case 0:
        if(!add_user("admin",ui->login_input->text().trimmed(),ui->password_input->text().trimmed())){
            ui->error_field->setStyleSheet("color: red;");
            ui->error_field->setText("Пользователь с таким логином уже существует!");
        } else {ui->tableView->setModel(table_fill_2()); ui->login_input->clear();ui->password_input->clear();}
        break;
    case 1:
        if(!add_user("accountant",ui->login_input->text().trimmed(),ui->password_input->text().trimmed())){
            ui->error_field->setStyleSheet("color: red;");
            ui->error_field->setText("Пользователь с таким логином уже существует!");
        } else {ui->tableView->setModel(table_fill_2());}
        break;
    case 2:
        if(!add_user("pilot",ui->login_input->text().trimmed(),ui->password_input->text().trimmed())){
            ui->error_field->setStyleSheet("color: red;");
            ui->error_field->setText("Пользователь с таким логином уже существует!");
        } else {ui->tableView->setModel(table_fill_2());}
        break;
    }
    ui->login_input->clear();
    ui->password_input->clear();
}



