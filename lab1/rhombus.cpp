#include "figure.h"
#include "rhombus.h"
using namespace std;

Rhombus::Rhombus() : a(0.0, 0.0), b(0.0, 0.0), c(0.0, 0.0), d(0.0, 0.0) {}

Rhombus::Rhombus(Point at, Point bt, Point ct, Point dt) : a(at), b(bt), c(ct), d(dt) {}

Rhombus::Rhombus(istream &is)
{
    is >> a >> b >> c >> d;
}

size_t Rhombus::VertexesNumber()
{
    return 4;
}

double Rhombus::Area()
{
    return (a.dist(c) * b.dist(d)) / 2;
}

void Rhombus::Print(std::ostream &os)
{
    os << "Rhombus: " << a << " " << b << " " << c << " " << d << "\n";
}

istream &operator>>(istream &is, Rhombus &r)
{
    is >> r.a >> r.b >> r.c >> r.d;
    return is;
}

ostream &operator<<(ostream &os, Rhombus &r)
{
    os << "Rhombus: " << r.a << " " << r.b << " " << r.c << " " << r.d << "\n";
    return os;
}
