#include <cmath>
#include "point.h"
#include "trapezoid.h"

double Trapezoid::Area(){
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

void Trapezoid::Print(std::ostream& os){
    os << a << " " << b << " " << c << " " << d << "\n";
}

size_t Trapezoid::VertexesNumber(){
    return (size_t)(4);
}

Trapezoid::Trapezoid() : a(Point()), b(Point()), c(Point()), d(Point()){
}

Trapezoid::Trapezoid(Point a_, Point b_, Point c_, Point d_):
                                 a(a_), b(b_), c(c_), d(d_){
}

Trapezoid::Trapezoid(std::istream& is){
    is >> a >> b >> c >> d; 
}

std::istream &operator>>(std::istream &is, Trapezoid &figure){
    is >> figure.a >> figure.b >> figure.c >> figure.d;
    return is;
}     
        
std::ostream &operator<<(std::ostream &os, const Trapezoid &figure){
    os << "Trapezoid: " << figure.a << " " << figure.b << " " << figure.c << " " << figure.d << std::endl;
    return os;
}