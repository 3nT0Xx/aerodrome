#ifndef DB_MANAGER_H
#define DB_MANAGER_H
#include "QObject"
#include <utility>

enum {PLANE_ID = 0, PLANE_NAME ,PLANE_PRICE, PLANE_X, PLANE_Y, PLANE_SPEED, PLANE_STATUS };

std::pair<bool, int> auth(QString, QString);
bool add_user(QString role, QString login, QString password);
bool add_plane(QString name, int price);
bool coord_write(double x1, double y1, double x2, double y2, double x3, double y3);
bool delete_user(QString login);
std::vector<std::vector<QString>> get_user_list();
std::vector<std::vector<QString>> get_plane_list();
bool delete_plane(int ID);
std::vector<std::pair<double,double>> get_aerodrome_coords();
std::pair<double,double> get_aerodrome_coord();
bool create_rent_request(int Plane_ID, QString Pilot_Login);
bool usr_has_open_request(QString login);
std::vector<std::vector<QString>> get_request_db();
std::vector<std::vector<QString>> get_open_request_db();
bool change_request_status(QString Login, QString status);
QString get_latest_user_request_status(QString Login);
void change_plane_status(int ID, QString status);
bool is_on_aerodrome(double x, double y);
void change_plane_coords(int ID, double x, double y);
std::vector<std::vector<QString>> get_flight_finished_request_db();
#endif // DB_MANAGER_H
