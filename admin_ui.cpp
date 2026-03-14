#include "admin_ui.h"
#include "ui_admin_ui.h"
#include "admin_coord_input.h"
#include "admin_user_edit_action_select.h"
#include "loginwindow.h"
#include "admin_plane_action_select.h"

admin_ui::admin_ui(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_ui)
{
    ui->setupUi(this);
}

admin_ui::~admin_ui()
{
    delete ui;
}

void admin_ui::on_plane_list_Button_clicked()
{
    admin_plane_action_select *p = new admin_plane_action_select();
    p->show();
    this->deleteLater();
}

void admin_ui::on_user_list_Button_clicked()
{
    admin_user_edit_action_select *u = new admin_user_edit_action_select();
    u->show();
    this->deleteLater();
}

void admin_ui::on_lane_coord_Button_clicked()
{
    admin_coord_input *i = new admin_coord_input();
    i->show();
}


void admin_ui::on_logout_clicked()
{
    LoginWindow *l = new LoginWindow();
    l->show();
    this->deleteLater();
}


void admin_ui::on_exit_clicked()
{
    this->deleteLater();
}



