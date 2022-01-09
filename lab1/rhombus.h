#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "figure.h"
using namespace std;

class Rhombus : public Figure
{
public:
    size_t VertexesNumber() override;
    double Area() override;
    void Print(ostream &os) override;

    Rhombus();
    Rhombus(Point at, Point bt, Point ct, Point dt);
    Rhombus(istream &is);

    friend istream &operator>>(istream &is, Rhombus &figure);
    friend ostream &operator<<(ostream &os, Rhombus &figure);

protected:
    Point a;
    Point b;
    Point c;
    Point d;
};

#endif // RHOMBUS_H
