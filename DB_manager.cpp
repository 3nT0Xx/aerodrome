#include "qobject.h"
#include "DB_manager.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <utility>
#include <QApplication>
#include <QDir>
#include <fstream>
#include <QFileInfo>
#include <algorithm>
#include <ctime>

//!User-related functions===========================================================================================================
std::vector<std::vector<QString>> user_split_for_search(std::string &orig){
    std::vector<std::vector<QString>> tmp = {};
    std::vector<QString> subtmp = {};
    subtmp.push_back(QString::fromStdString(orig.substr(0,orig.find(','))));
    orig.erase(0,orig.find(',') + 1);
    tmp.push_back(subtmp);
    subtmp.clear();
    subtmp.push_back(QString::fromStdString(orig.substr(0,orig.find(','))));
    orig.erase(0,orig.find(',') + 1);
    subtmp.push_back(QString::fromStdString(orig));
    tmp.push_back(subtmp);
    return tmp;
}

std::pair<bool, int> auth(QString login, QString password){
    std::unordered_map<QString,int> role_to_int; role_to_int["admin"] = 0; role_to_int["accountant"] = 1; role_to_int["pilot"] = 2;
    QFileInfo db_p; db_p.setFile("user_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "user_db.txt";
    std::ifstream db; db.open(path);
    std::string tmp;
    std::unordered_map<QString, std::vector<QString>> um;
    while (db >> tmp){
        std::vector<std::vector<QString>> a_v = user_split_for_search(tmp);
        um[a_v[0][0]] = a_v[1];
    }
    if (um.count(login) != 0){
        if (um[login][0] == password){
            return std::make_pair(true,role_to_int[um[login][1]]);
        } else {return std::make_pair(false,-1);}
    }
    db.close();
    return std::make_pair(false,-2);
}

bool login_exists(QString login){
    QFileInfo db_p; db_p.setFile("user_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "user_db.txt";
    std::ifstream db; db.open(path);
    std::string tmp;
    std::unordered_map<QString, QString> um;
    while (db >> tmp){
        std::vector<std::vector<QString>> a_v = user_split_for_search(tmp);
        if (a_v[0][0] == login){
            return true;
        }
    }
    return false;
}

bool add_user(QString role, QString login, QString password){
    QFileInfo db_p; db_p.setFile("user_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "user_db.txt" ;
    std::ifstream db_r; db_r.open(path);
    std::string tmp;
    std::unordered_map<QString, std::vector<QString>> um;
    while (db_r >> tmp){
        std::vector<std::vector<QString>> a_v = user_split_for_search(tmp);
        um[a_v[0][0]] = a_v[1];
    }
    if (login_exists(login)) return false;
    db_r.close();
    std::ofstream db_w; db_w.open(path, std::fstream::app);
    db_w << login.toStdString() + "," + password.toStdString() + ',' + role.toStdString() + "\n";
    db_w.close();
    return true;
}

bool delete_user(QString login){
    QFileInfo db_p; db_p.setFile("user_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "user_db.txt" ;
    std::ifstream db_r; db_r.open(path);
    std::string tmp, res_db = "";
    bool changes_made = false;
    while (db_r >> tmp){
        std::string l = user_split_for_search(tmp)[0][0].toStdString();
        if (l.find(login.toStdString()) == std::string::npos){
            res_db += tmp + '\n';
        } else {changes_made = true;}
    }
    db_r.close();
    std::ofstream db_w; db_w.open(path);
    db_w << res_db;
    db_w.close();
    return changes_made;
}

std::vector<std::vector<QString>> get_user_list(){
    std::vector<std::vector<QString>> out;
    QFileInfo db_p; db_p.setFile("user_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "user_db.txt" ;
    std::ifstream db_r; db_r.open(path);
    std::string tmp;
    while (db_r >> tmp){
        std::vector<std::vector<QString>> tmp_v = user_split_for_search(tmp);
        out.push_back({tmp_v[0][0],tmp_v[1][1]});
    }
    return out;
}
//!Aerodrome-related functions==========================================================================================================

bool is_rect(double x1, double y1, double x2, double y2, double x3, double y3)
{
    std::vector<double> vec1  = {x2 - x1, y2 - y1};
    std::vector<double> vec2 = {x3 - x1, y3 - y1};
    if ((vec1[0] == 0 && vec1[1] == 0 ) || (vec2[0] == 0 && vec2[1] == 0)){
        return false;
    }
    double vec_mult = vec1[0] * vec2[0] + vec1[1] * vec2[1];
    return (std::abs(vec_mult) < 1e-9);
}

std::vector<std::pair<double,double>> get_aerodrome_coords(){
    std::vector<std::pair<double,double>> res = {};
    QFileInfo f; f.setFile("plane_db.txt");
    std::string coord_path = f.absoluteFilePath().toStdString().substr(0,f.absoluteFilePath().toStdString().find("build")) + "coords.txt";
    std::ifstream coords; coords.open(coord_path);
    std::vector<std::string> coord_pairs = {"","",""}; coords >> coord_pairs[0] >> coord_pairs[1] >> coord_pairs[2];
    for (auto point : coord_pairs){
        double x = std::stod(point.substr(0,point.find(',')));
        double y = std::stod(point.substr(point.find(',') + 1));
        res.push_back(std::make_pair(x,y));
    }
    coords.close();
    return res;
}

std::pair<double,double> get_aerodrome_coord(){
    std::vector<std::pair<double,double>> res = {};
    QFileInfo f; f.setFile("plane_db.txt");
    std::string coord_path = f.absoluteFilePath().toStdString().substr(0,f.absoluteFilePath().toStdString().find("build")) + "coords.txt";
    std::ifstream coords; coords.open(coord_path);
    std::vector<std::string> coord_pairs = {"","",""}; coords >> coord_pairs[0] >> coord_pairs[1] >> coord_pairs[2];
    for (auto point : coord_pairs){
        double x = std::stod(point.substr(0,point.find(',')));
        double y = std::stod(point.substr(point.find(',') + 1));
        res.push_back(std::make_pair(x,y));
    }
    coords.close();
    return res[0];
}
bool coord_write(double x1, double y1, double x2, double y2, double x3, double y3){
    if (!is_rect(x1, y1, x2, y2, x3, y3)){ return false; }
    QFileInfo db_p; db_p.setFile("coords.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "coords.txt" ;
    std::ofstream db_w; db_w.open(path);
    db_w << x1 << ',' << y1 << '\n' << x2 << ',' << y2 << '\n' << x3 << ',' << y3 << '\n';
    db_w.close();
    return true;
}

bool is_on_aerodrome(double x, double y){
    std::vector<std::pair<double,double>> points = get_aerodrome_coords();
    double u_x = points[1].first - points[0].first;
    double v_x = points[2].first - points[0].first;
    double u_y = points[1].second - points[0].second;
    double v_y = points[2].second - points[0].second;
    double alpha = ((x - points[0].first)*u_x + (y - points[0].second)*u_y)/(u_x*u_x + u_y*u_y);
    double beta = ((x - points[0].first)*v_x + (y - points[0].second)*v_y)/(v_x*v_x + v_y*v_y);
    return (!(alpha < 0 || alpha > 1 || beta < 0 || beta > 1));
}

//!Plane-related functions====================================================================================================================

std::vector<QString> plane_split_for_search(std::string orig){
    std::vector<QString> tmp = {};
    while (orig.find(',') != std::string::npos){
        tmp.push_back(QString::fromStdString(orig.substr(0,orig.find(','))));
        orig.erase(0,orig.find(',') + 1);
    }
    tmp.push_back(QString::fromStdString(orig));
    return tmp;
}

bool is_in(std::vector<int> &v, int val){
    for (int i : v){
        if (i==val){return true;}
    }
    return false;
}

std::vector<int> missing_ids(std::vector<int> &ids){
    if (ids.size() == 0){
        return {1};
    }
    std::vector<int> m_ids;
    auto max_it = std::max_element(ids.begin(),ids.end());
    for (int i = 1; i <= *max_it + 1; i++){
        if (!is_in(ids,i)){
            m_ids.push_back(i);
        }
    }
    return m_ids;
}

bool add_plane(QString name, int price){
    QFileInfo f; f.setFile("plane_db.txt");
    std::string path = f.absoluteFilePath().toStdString().substr(0,f.absoluteFilePath().toStdString().find("build")) + "plane_db.txt";
    std::ifstream r_db; r_db.open(path);
    std::string tmp;
    std::vector<int> existing_ids;
    while (r_db >> tmp) {
        existing_ids.push_back(plane_split_for_search(tmp)[0].toInt());
    }
    int lowest_non_existent_ID = missing_ids(existing_ids)[0];
    std::string id = std::to_string(lowest_non_existent_ID);
    id = std::string(10 - id.length(), '0') + id;
    r_db.close();
    std::ofstream w_db; w_db.open(path, std::ios::app);
    std::pair<double,double> coords = get_aerodrome_coord();
    w_db << id << ',' << name.toStdString() << ',' << std::to_string(price) <<',' << coords.first << ',' << coords.second << ',' << 0 << ',' << "available" << "\n";
    w_db.close();
    return true;
}

bool delete_plane(int ID){
    QFileInfo db_p; db_p.setFile("plane_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "plane_db.txt" ;
    std::ifstream db_r; db_r.open(path);
    std::string tmp, res_db = "";
    bool changes_made = false;
    while (db_r >> tmp){
        int cur_ID = plane_split_for_search(tmp)[0].toInt();
        if (cur_ID != ID){
            res_db += tmp + "\n";
        } else {changes_made = true;}
    }
    db_r.close();
    std::ofstream db_w; db_w.open(path);
    db_w << res_db;
    db_w.close();
    return changes_made;
}

std::vector<std::vector<QString>> get_plane_list(){
    std::vector<std::vector<QString>> out;
    QFileInfo db_p; db_p.setFile("plane_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "plane_db.txt" ;
    std::ifstream db_r; db_r.open(path);
    std::string tmp;
    while (db_r >> tmp){
        std::vector<QString> tmp_v = plane_split_for_search(tmp);
        out.push_back({tmp_v[PLANE_ID],tmp_v[PLANE_NAME],tmp_v[PLANE_PRICE],tmp_v[PLANE_X],tmp_v[PLANE_Y],tmp_v[PLANE_SPEED], tmp_v[PLANE_STATUS]});
    }
    db_r.close();
    return out;
}
void change_plane_status(int ID, QString status){
    QString output = ""; bool ok;
    std::vector<std::vector<QString>> plane_list = get_plane_list();
    QFileInfo db_p; db_p.setFile("plane_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "plane_db.txt" ;
    std::ofstream db_w; db_w.open(path);
    for (auto plane: plane_list){
        if (plane[PLANE_ID].toInt(&ok,10) == ID){
            output += plane[PLANE_ID] + ',' + plane[PLANE_NAME] + ',' + plane[PLANE_PRICE] + ',' + plane[PLANE_X] + ',' + plane[PLANE_Y] + ',' + plane[PLANE_SPEED] + ',' + status + '\n';
        } else {
            output += plane[PLANE_ID] + ',' + plane[PLANE_NAME] + ',' + plane[PLANE_PRICE] + ',' + plane[PLANE_X] + ',' + plane[PLANE_Y] + ',' + plane[PLANE_SPEED] + ',' + plane[PLANE_STATUS] + '\n';
        }
    }
    db_w << output.toStdString();
    db_w.close();
}

void change_plane_coords(int ID, double x, double y){
    QString output = ""; bool ok;
    std::vector<std::vector<QString>> plane_list = get_plane_list();
    QFileInfo db_p; db_p.setFile("plane_db.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "plane_db.txt" ;
    std::ofstream db_w; db_w.open(path);
    for (auto plane: plane_list){
        if (plane[PLANE_ID].toInt(&ok,10) == ID){
            output += plane[PLANE_ID] + ',' + plane[PLANE_NAME] + ',' + plane[PLANE_PRICE] + ',' + QString::number(x) + ',' + QString::number(y) + ',' + plane[PLANE_SPEED] + ',' + plane[PLANE_STATUS] + '\n';
        } else {
            output += plane[PLANE_ID] + ',' + plane[PLANE_NAME] + ',' + plane[PLANE_PRICE] + ',' + plane[PLANE_X] + ',' + plane[PLANE_Y] + ',' + plane[PLANE_SPEED] + ',' + plane[PLANE_STATUS] + '\n';
        }
    }
    db_w << output.toStdString();
    db_w.close();
}
//!Request-related functions====================================================================================================================
enum req_db_elems {P_ID = 0, USR_ID, STATUS, FLIGHT_START_TIME};
std::vector<QString> request_split_for_search(std::string str)
{
    std::vector<QString> res = {};
    std::string substr = str.substr(0,str.find(','));
    res.push_back(QString::fromStdString(substr));
    str.erase(0,str.find(',') + 1);
    substr = str.substr(0,str.find(','));
    res.push_back(QString::fromStdString(substr));
    str.erase(0,str.find(',') + 1);
    substr = str.substr(0,str.find(','));
    res.push_back(QString::fromStdString(substr));
    str.erase(0,str.find(',') + 1);
    res.push_back(QString::fromStdString(str));
    return res;
}

std::vector<std::vector<QString>> get_request_db(){
    std::vector<std::vector<QString>> res;
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        res.push_back(v);
    }
    db_r.close();
    return res;
}

bool usr_has_open_request(QString login){
    std::vector<std::vector<QString>> request_db = get_request_db();
    for (auto request : request_db){
        if (request[USR_ID] == login && request[STATUS] == "open"){
            return true;
        }
    }
    return false;
}

bool create_rent_request(int Plane_ID, QString Pilot_Login){
    if (usr_has_open_request(Pilot_Login)){return false;}
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ofstream db_w; db_w.open(path, std::ios::app);
    db_w << Plane_ID << "," << Pilot_Login.toStdString() << ',' << "open\n";
    db_w.close();
    return true;
}
std::vector<std::vector<QString>> get_open_request_db(){
    std::vector<std::vector<QString>> res;
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        if (v[STATUS] == "open"){
        res.push_back(v);
        }
    }
    db_r.close();
    return res;
}

std::vector<std::vector<QString>> get_flight_finished_request_db(){
    std::vector<std::vector<QString>> res;
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        if (v[STATUS] == "flight_finished"){
            res.push_back(v);
        }
    }
    db_r.close();
    return res;
}

int find_latest_user_request_num (QString login){
    int res = 0; int cur_i = 0;
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        if (v[USR_ID] == login){
            res = cur_i;
        }
        cur_i++;
    }
    db_r.close();
    return res;
}

 std::vector<QString> find_latest_user_request (QString login){
    std::vector<QString> res = {};
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        if (v[USR_ID] == login){
            res = v;
        }
    }
    db_r.close();
    return res;
}

bool change_request_status(QString Login, QString status){
    std::vector<std::vector<QString>> res;
    std::string tmp;
    QFileInfo db_p; db_p.setFile("request_base.txt");
    std::string path = db_p.absoluteFilePath().toStdString().substr(0,db_p.absoluteFilePath().toStdString().find("build")) + "request_base.txt" ;
    std::ifstream db_r; db_r.open(path);
    if (!db_r.is_open()){return db_r.is_open();}
    int cur_i = 0;
    while (db_r >> tmp){
        std::vector<QString> v = request_split_for_search(tmp);
        if (status != "satisfied" && status != "flight_finished"){
            if (v[USR_ID] == Login && cur_i == find_latest_user_request_num(Login)){
                res.push_back({v[P_ID], v[USR_ID], status, "-1"});
            } else {
                res.push_back(v);
            }
            cur_i++;
        } else {
            if (v[USR_ID] == Login && cur_i == find_latest_user_request_num(Login)){
                long long int secs_since_epoch = std::time(NULL);
                QString s = QString::number(secs_since_epoch);
                res.push_back({v[P_ID], v[USR_ID], status, s});
            } else {
                res.push_back(v);
            }
            cur_i++;
        }
    }
    db_r.close();
    std::ofstream db_w; db_w.open(path);
    if (!db_w.is_open()){return db_w.is_open();}
    for (auto req : res){
        db_w << req[P_ID].toStdString() << ',' << req[USR_ID].toStdString() << ',' << req[STATUS].toStdString() << '\n';
    }
    db_w.close();
    return true;
}

QString get_latest_user_request_status(QString Login){
    std::vector<QString> latest_request =  find_latest_user_request(Login);
    if (latest_request.empty()){
        return "none";
    }
    return latest_request[STATUS];
}
