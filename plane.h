#ifndef PLANE_H
#define PLANE_H
#include "QObject"
class plane
{
private:
    QString ID;
    QString Name;
    int v;
    int x_coord;
    int y_coord;
public:
    plane(QString ID, QString Name);
};

#endif // PLANE_H
