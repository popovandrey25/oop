#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "figure.h"
using namespace std;

class Trapezoid : public Figure
{
public:
    size_t VertexesNumber();
    double Area();
    void Print(ostream &os);

    Trapezoid();
    Trapezoid(Point at, Point bt, Point ct, Point dt);
    Trapezoid(istream &is);

    friend istream &operator>>(istream &is, Trapezoid &figure);
    friend ostream &operator<<(ostream &os, Trapezoid &figure);

private:
    Point a;
    Point b;
    Point c;
    Point d;
};

#endif // TRAPEZOID_H
