#include "payment_window.h"
#include "ui_payment_window.h"
#include "pilot_ui.h"
#include "DB_manager.h"
#include <QPixmap>

QString LOG ;
payment_window::payment_window(QString login, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::payment_window)
{
    ui->setupUi(this);
    srand(time(NULL));
    int payment_amt = rand() % 1000 + 250;
    QString Text = "Уважаемый " + login + ",\n Стоимость Вашего полёта: " + QString::number(payment_amt) + "\n QR код для оплаты: \n";
    ui->label_2->setText(Text);
    QPixmap pixmap("C:/Users/enT0Xx/Documents/aerodrome/qr.png");
    ui->label->setPixmap(pixmap.scaled(300,300));
    ui->label->setAlignment(Qt::AlignCenter);
    LOG = login;
}

payment_window::~payment_window()
{
    delete ui;
}

void payment_window::on_pushButton_clicked()
{
    pilot_ui *p = new pilot_ui(nullptr, LOG);
    change_request_status(LOG, "closed");
    p->show();
    this->deleteLater();
}

