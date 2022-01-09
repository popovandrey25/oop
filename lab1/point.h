#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
public:
    Point();
    Point(istream &is);
    Point(double x, double y);

    double dist(Point &other);
    double dist2(Point &other);

    double getX();
    double getY();

    friend istream &operator>>(istream &is, Point &p);
    friend ostream &operator<<(ostream &os, Point &p);

private:
    double x;
    double y;
};

#endif // POINT_H
