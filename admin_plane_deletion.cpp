#include "admin_plane_deletion.h"
#include "ui_admin_plane_deletion.h"
#include <QStandardItem>
#include "DB_manager.h"
#include "admin_plane_action_select.h"
#include <QSortFilterProxyModel>

QSortFilterProxyModel *p_table_fill2(){
    QStandardItemModel *u_m = new QStandardItemModel();
    std::vector<std::vector<QString>> user_list = get_plane_list();
    for (std::vector<QString> v: user_list){
        u_m->appendRow({new QStandardItem(v[0]),new QStandardItem(v[1]), new QStandardItem(v[2]),new QStandardItem(v[3]),new QStandardItem(v[4]),new QStandardItem(v[5]), new QStandardItem(v[6])});
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
admin_plane_deletion::admin_plane_deletion(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_plane_deletion)
{
    ui->setupUi(this);
    ui->accept->setDisabled(true);
    ui->table->setModel(p_table_fill2());
    ui->table->setSortingEnabled(true);
    ui->table->sortByColumn(0, Qt::AscendingOrder);
    for (int i = 0; i < 6; i++){
        ui->table->setColumnWidth(i,130);
    }
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

admin_plane_deletion::~admin_plane_deletion()
{
    delete ui;
}
void admin_plane_deletion::accept_state_check(){
    if (ui->ID_input->value() > 0){
        ui->accept->setDisabled(false);
        ui->accept->clearFocus();
    } else {ui->accept->setDisabled(true);}
}

void admin_plane_deletion::on_exit_clicked()
{
    admin_plane_action_select *s = new admin_plane_action_select();
    s->show();
    this->deleteLater();
}


void admin_plane_deletion::on_ID_input_valueChanged()
{
    accept_state_check();
}


void admin_plane_deletion::on_accept_clicked()
{
    if(!delete_plane(ui->ID_input->value())){
        ui->err_field->setStyleSheet("color: red;");
        ui->err_field->setText("Самолёта с таким ID нет в базе данных!");
    } else {
        ui->table->setModel(p_table_fill2());
        ui->table->setSortingEnabled(true);
        ui->table->sortByColumn(0, Qt::AscendingOrder);
        ui->ID_input->setValue(0);
    }
}

