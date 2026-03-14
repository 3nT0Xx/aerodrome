#include "admin_user_edit_action_select.h"
#include "ui_admin_user_edit_action_select.h"
#include "admin_user_addition.h"
#include "admin_ui.h"
#include "user_deletion.h"

admin_user_edit_action_select::admin_user_edit_action_select(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_user_edit_action_select)
{
    ui->setupUi(this);
}

admin_user_edit_action_select::~admin_user_edit_action_select()
{
    delete ui;
}

void admin_user_edit_action_select::on_add_user_clicked()
{
    admin_user_addition *a = new admin_user_addition();
    a->show();
    this->deleteLater();
}


void admin_user_edit_action_select::on_cancel_clicked()
{
    admin_ui *a = new admin_ui();
    a->show();
    this->deleteLater();
}


void admin_user_edit_action_select::on_delete_user_clicked()
{
    user_deletion *d = new user_deletion();
    d->show();
    this->deleteLater();
}

