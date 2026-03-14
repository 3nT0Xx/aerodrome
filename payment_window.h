#ifndef PAYMENT_WINDOW_H
#define PAYMENT_WINDOW_H

#include <QWidget>

namespace Ui {
class payment_window;
}

class payment_window : public QWidget
{
    Q_OBJECT

public:
    explicit payment_window(QString login, QWidget *parent = nullptr);
    ~payment_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::payment_window *ui;
};

#endif // PAYMENT_WINDOW_H
