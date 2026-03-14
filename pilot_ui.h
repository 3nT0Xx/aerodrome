#ifndef PILOT_UI_H
#define PILOT_UI_H

#include <QWidget>

namespace Ui {
class pilot_ui;
}

class pilot_ui : public QWidget
{
    Q_OBJECT

public:
    explicit pilot_ui(QWidget *parent = nullptr, QString pilot_login = "");
    ~pilot_ui();

private slots:
    void on_close_clicked();

    void on_accept_clicked();

    void on_available_plane_view_clicked(const QModelIndex &index);

private:
    Ui::pilot_ui *ui;

    int selected_row = 0;

    QString pilot_login;
};

#endif // PILOT_UI_H
