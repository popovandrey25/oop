#include "point.h"
#include <cmath>
using namespace std;

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point(istream &is)
{
    is >> x >> y;
}

double Point::dist(Point &other)
{
    double a = (other.x - x);
    double b = (other.y - y);
    return sqrt(a * a + b * b);
}

double Point::dist2(Point &other)
{
    double a = (other.x - x);
    double b = (other.y - y);
    return a * a + b * b;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

istream &operator>>(istream &is, Point &p)
{
    is >> p.x >> p.y;
    return is;
}

ostream &operator<<(ostream &os, Point &p)
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}
