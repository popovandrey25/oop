#ifndef PENTAGON_H
#define PENTAGON_H

#include "figure.h"
using namespace std;

class Pentagon : public Figure
{
public:
    size_t VertexesNumber();
    double Area();
    void Print(ostream &os);

    Pentagon();
    Pentagon(Point at, Point bt, Point ct, Point dt, Point et);
    Pentagon(istream &is);

    friend istream &operator>>(istream &is, Pentagon &figure);
    friend ostream &operator<<(ostream &os, Pentagon &figure);

private:
    Point a;
    Point b;
    Point c;
    Point d;
    Point e;
};

#endif // Pentagon_H
