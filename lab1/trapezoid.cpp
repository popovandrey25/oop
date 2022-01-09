#include <cmath>
#include "trapezoid.h"
using namespace std;

Trapezoid::Trapezoid() : a(0.0, 0.0), b(0.0, 0.0), c(0.0, 0.0), d(0.0, 0.0) {}

Trapezoid::Trapezoid(Point at, Point bt, Point ct, Point dt) : a(at), b(bt), c(ct), d(dt) {}

Trapezoid::Trapezoid(istream &is)
{
    is >> a >> b >> c >> d;
}

size_t Trapezoid::VertexesNumber()
{
    return 4;
}

/*double Trapezoid::Area() // 0.0 0.0 1.0 0.0 1.0 1.0 0.0 1.0
{
    double AB = a.dist(b);
    double BC = b.dist(c);
    double CD = c.dist(d);
    double DA = d.dist(a);
    if (DA > BC) {
        double t = DA;
        DA = BC;
        BC = t;
    }
    double p = (AB + BC + CD + DA) / 2.0;
    double num = sqrt((p - BC) * (p - DA) * (p - DA - AB) * (p - DA - CD));
    double denum = abs(BC - DA);
    return (num / denum);
}*/

double Trapezoid::Area() // 0.0 0.0 1.0 0.0 1.0 1.0 0.0 1.0
{
    double la = a.dist(d);
    double lb = b.dist(c);
    double lc = c.dist(d);
    double ld = a.dist(b);
    if (la > lb) {
        double t = la;
        la = lb;
        lb = t;
    }
    double numenator = (lb - la) * (lb - la) + lc * lc - ld * ld;
    double denumenator = 2 * (lb - la);
    if (denumenator == 0) {
        return (la * lc);
    }
    double h = sqrt(lc * lc - ((numenator * numenator) / (denumenator * denumenator)));
    return ((la + lb) / 2 * h);
}

void Trapezoid::Print(std::ostream &os)
{
    os << "Trapezoid: " << a << " " << b << " " << c << " " << d << "\n";
}

istream &operator>>(istream &is, Trapezoid &r)
{
    is >> r.a >> r.b >> r.c >> r.d;
    return is;
}

ostream &operator<<(ostream &os, Trapezoid &r)
{
    os << "Trapezoid: " << r.a << " " << r.b << " " << r.c << " " << r.d << "\n";
    return os;
}
