#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "DB_manager.h"
#include "admin_ui.h"
#include "pilot_ui.h"
#include "accountant_ui.h"
#include "pilot_with_request.h"
#include <QLineEdit>
#include <utility>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->Login_Button->setDisabled(true);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_Login_Button_clicked()
{
    QString login = ui->login_intput->text();
    QString password = ui->password_input->text();
    std::pair <bool, int> login_result = auth(login,password);
    if (login_result.first){
        admin_ui *ad = new admin_ui();
        accountant_ui *ac = new accountant_ui();
        pilot_ui *pl = new pilot_ui(nullptr,login);
        pilot_with_already_open_request *plor;
        if (login_result.second == 2){
            plor = new pilot_with_already_open_request(nullptr,login, get_latest_user_request_status(login));
        } else {
            plor = new pilot_with_already_open_request(nullptr,login,"");
        }
        switch (login_result.second){
        case 0:
            ad->show();
            ac->close();
            pl->close();
            plor->close();
            break;
        case 1:
            ac->show();
            ad->close();
            pl->close();
            plor->close();
            break;
        case 2:

            if (get_latest_user_request_status(login) != "closed"){
                plor->show();
                pl->close();
            } else {
                pl->show();
                plor->close();
            }
            ac->close();
            ad->close();
            break;
        default:
            ad->close();
            ac->close();
            pl->close();
            plor->close();
            break;
        }
        this->close();
    } else {
        ui->error_line->setStyleSheet("color: red;");
        switch(login_result.second){
        case -1:
            ui->error_line->setText("Неверный пароль!");
            break;
        case -2:
            ui->error_line->setText( "Пользователя с таким логином не существует!");
            break;
        default:
            ui->error_line->setText( "Неизвестная ошибка...");
            break;
        }
    }
}

void LoginWindow::check_button_state_login(){
    if (!ui->login_intput->text().trimmed().isEmpty() && !ui->password_input->text().trimmed().isEmpty()){
        ui->Login_Button->setDisabled(false);
    } else {ui->Login_Button->setDisabled(true);}
}

void LoginWindow::on_password_input_textChanged()
{
    check_button_state_login();
}


void LoginWindow::on_login_intput_textChanged()
{
    check_button_state_login();
}

