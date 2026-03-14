#include "admin_plane_action_select.h"
#include "ui_admin_plane_action_select.h"
#include "admin_ui.h"
#include "admin_plane_addition.h"
#include "admin_plane_deletion.h"

admin_plane_action_select::admin_plane_action_select(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_plane_action_select)
{
    ui->setupUi(this);

}

admin_plane_action_select::~admin_plane_action_select()
{
    delete ui;
}

void admin_plane_action_select::on_close_clicked()
{
    admin_ui *a = new admin_ui();
    a->show();
    this->deleteLater();
}


void admin_plane_action_select::on_add_clicked()
{
    admin_plane_addition *pa = new admin_plane_addition();
    pa->show();
    this->deleteLater();
}


void admin_plane_action_select::on_remove_clicked()
{
    admin_plane_deletion *pd = new admin_plane_deletion();
    pd->show();
    this->deleteLater();
}

