#include "admin_plane_addition.h"
#include "ui_admin_plane_addition.h"
#include "admin_plane_action_select.h"
#include "DB_manager.h"
#include <QStandardItem>
#include <QSortFilterProxyModel>

QSortFilterProxyModel *p_table_fill(){
    QStandardItemModel *u_m = new QStandardItemModel();
    std::vector<std::vector<QString>> user_list = get_plane_list();
    for (std::vector<QString> v: user_list){
        u_m->appendRow({new QStandardItem(v[0]),new QStandardItem(v[1]), new QStandardItem(v[2]),new QStandardItem(v[3]),new QStandardItem(v[4]),new QStandardItem(v[5]),new QStandardItem(v[6])});
    }
    u_m->setHorizontalHeaderItem(0,new QStandardItem("ID"));
    u_m->setHorizontalHeaderItem(1,new QStandardItem("Название"));
    u_m->setHorizontalHeaderItem(2,new QStandardItem("Цена"));
    u_m->setHorizontalHeaderItem(3,new QStandardItem("Координата x"));
    u_m->setHorizontalHeaderItem(4,new QStandardItem("Координата y"));
    u_m->setHorizontalHeaderItem(5,new QStandardItem("Скорость"));
    u_m->setHorizontalHeaderItem(6,new QStandardItem("Доступность"));
    QSortFilterProxyModel *proxy = new QSortFilterProxyModel();
    proxy->setSourceModel(u_m);
    return proxy;
}
admin_plane_addition::admin_plane_addition(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_plane_addition)
{
    ui->setupUi(this);
    ui->accept->setDisabled(true);
    ui->tableView->setModel(p_table_fill());
    ui->tableView->setSortingEnabled(true);
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);
    for (int i = 0; i < 6; i++){
    ui->tableView->setColumnWidth(i,130);
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

admin_plane_addition::~admin_plane_addition()
{
    delete ui;
}

void admin_plane_addition::on_cancel_clicked()
{
    admin_plane_action_select *s = new admin_plane_action_select();
    s->show();
    this->deleteLater();
}

void admin_plane_addition::check_button_state_plane_addition(){
    if(!ui->name_input->text().trimmed().isEmpty() && (ui->pricing_input->value() != 0)){
        ui->accept->setDisabled(false);
        ui->accept->clearFocus();
    } else {ui->accept->setDisabled(true);}
}

void admin_plane_addition::on_name_input_textChanged()
{
    check_button_state_plane_addition();
}


void admin_plane_addition::on_pricing_input_valueChanged()
{
    check_button_state_plane_addition();
}


void admin_plane_addition::on_accept_clicked()
{
    add_plane(ui->name_input->text(), ui->pricing_input->value());
    ui->name_input->clear();
    ui->pricing_input->clear();
    ui->tableView->setModel(p_table_fill());
    ui->tableView->setSortingEnabled(true);
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);
}

