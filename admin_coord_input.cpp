#include "admin_coord_input.h"
#include "ui_admin_coord_input.h"
#include "DB_manager.h"



admin_coord_input::admin_coord_input(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_coord_input)
{
    ui->setupUi(this);

}

admin_coord_input::~admin_coord_input()
{
    delete ui;
}

void admin_coord_input::on_coord_confirm_clicked()
{
    if(!coord_write(ui->x1_input->value(), ui->y1_input->value(), ui->x1_input_2->value(), ui->y1_input_2->value(), ui->x1_input_3->value(), ui->y1_input_3->value())){
        ui->err_field->setStyleSheet("color: red;");
        ui->err_field->setText("ОШИБКА ВНЕСЕНИЯ КООРДИНАТ! \n Имеется нулевая сторона или угол не прямой!");
    } else {
        ui->err_field->setStyleSheet("color: green;");
        ui->err_field->setText("Координаты успешно изменены");
        std::vector<std::vector<QString>> planes = get_plane_list();
        for (auto plane: planes){
            if (plane[PLANE_STATUS] == "available"){
                change_plane_coords(plane[PLANE_ID].toInt(), ui->x1_input->value(), ui->y1_input->value());
            }
        }
    }
}



void admin_coord_input::on_dismiss_clicked()
{
    this->deleteLater();
}


