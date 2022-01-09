#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
using namespace std;

class Figure {
public:
    virtual size_t VertexesNumber() = 0;
    virtual double Area() = 0;
    virtual void Print(ostream &os) = 0;
    ~Figure() {};
};

#endif // FIGURE_H
