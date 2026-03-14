#include "pilot_ui.h"
#include "ui_pilot_ui.h"
#include <QStandardItem>
#include "DB_manager.h"
#include "loginwindow.h"
#include "QDebug"
#include "pilot_with_request.h"
QStandardItemModel *pilot_table_fill(){
    QStandardItemModel *u_m = new QStandardItemModel();
    std::vector<std::vector<QString>> plane_list = get_plane_list();
    std::pair<double, double> a_coords = get_aerodrome_coords()[0];
    for (std::vector<QString> v: plane_list){
        if(v[6] == "available" && v[3].toDouble() == a_coords.first && v[4].toDouble() == a_coords.second){
        u_m->appendRow({new QStandardItem(v[1]), new QStandardItem(v[2])});
        }
    }
    u_m->setHorizontalHeaderItem(0,new QStandardItem("Название"));
    u_m->setHorizontalHeaderItem(1,new QStandardItem("Цена"));
    return u_m;
}
pilot_ui::pilot_ui(QWidget *parent, QString login)
    : QWidget(parent)
    , ui(new Ui::pilot_ui)
{
    ui->setupUi(this);
    ui->available_plane_view->setModel(pilot_table_fill());
    ui->accept->setDisabled(true);
    pilot_login = login;
}

pilot_ui::~pilot_ui()
{
    delete ui;
}

void pilot_ui::on_close_clicked()
{
    LoginWindow *l = new LoginWindow();
    l->show();
    this->deleteLater();
}


void pilot_ui::on_accept_clicked()
{
    std::vector<std::vector<QString>> plane_list = get_plane_list();
    if(create_rent_request(plane_list[selected_row][0].toInt(),pilot_login)){
        ui->err_field->setStyleSheet("color: green;");
        ui->err_field->setText("Заявка создана");
        pilot_with_already_open_request *pwr = new pilot_with_already_open_request(nullptr, pilot_login, "open");
        pwr->show();
        this->deleteLater();
    } else {
        ui->err_field->setStyleSheet("color: red;");
        ui->err_field->setText("Заявка уже существует!");
    }
}


void pilot_ui::on_available_plane_view_clicked(const QModelIndex &index)
{
    selected_row = index.row();
    ui->accept->setDisabled(false);
}

