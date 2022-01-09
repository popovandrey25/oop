#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "figure.h"

class Trapezoid: Figure {
    public:
        size_t VertexesNumber();
        double Area();
        void Print(std::ostream& os);
        Trapezoid();
        Trapezoid(Point a_, Point b_, Point c_, Point d_);
        Trapezoid(std::istream& is);
        friend std::istream &operator>>(std::istream &is, Trapezoid &figure);
        friend std::ostream &operator<<(std::ostream &os, const Trapezoid &figure);
    private:
        Point a;
        Point b;
        Point c;
        Point d;
};

#endif