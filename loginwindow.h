#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_Login_Button_clicked();

    void on_password_input_textChanged();

    void on_login_intput_textChanged();

    void check_button_state_login();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
