#include "figure.h"
#include "pentagon.h"
using namespace std;

Pentagon::Pentagon() : a(0.0, 0.0), b(0.0, 0.0), c(0.0, 0.0), d(0.0, 0.0), e(0.0, 0.0) {}

Pentagon::Pentagon(Point at, Point bt, Point ct, Point dt, Point et) : a(at), b(bt), c(ct), d(dt), e(et) {}

Pentagon::Pentagon(istream &is)
{
    is >> a >> b >> c >> d >> e;
}

size_t Pentagon::VertexesNumber()
{
    return 5;
}

double Pentagon::Area()
{
    return 0.5 * abs(a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * d.getY() + d.getX() * e.getY() + e.getX() * a.getY() -
    (a.getY() * b.getX() + b.getY() * c.getX() + c.getY() * d.getX() + d.getY() * e.getX() + e.getY() * a.getX()));
}

void Pentagon::Print(std::ostream &os)
{
    os << "Pentagon: " << a << " " << b << " " << c << " " << d << " " << e << "\n";
}

istream &operator>>(istream &is, Pentagon &r)
{
    is >> r.a >> r.b >> r.c >> r.d >> r.e;
    return is;
}

ostream &operator<<(ostream &os, Pentagon &r)
{
    os << "Pentagon: " << r.a << " " << r.b << " " << r.c << " " << r.d << " " << r.e << "\n";
    return os;
}
