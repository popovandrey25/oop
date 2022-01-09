#include <iostream>
#include <vector>
#include "figure.h"
#include "trapezoid.h"
#include "rhombus.h"
#include "pentagon.h"
#define ll long long
using namespace std;

int main(void)
{
    Point x1(3, 4);
    Point x2(6, 2);
    Point x3(3, 0);
    Point x4(0, 2);
    Point x5(0, 4);
    Rhombus r(x1, x2, x3, x4);
    Pentagon s(x1, x2, x3, x4, x5);
    Trapezoid t(x1, x2, x3, x4);
    vector<Figure*> vec;
    vec.push_back(&r);
    vec.push_back(&t);
    vec.push_back(&s);
    cout << r << s << t;
    for (ll unsigned int i = 0; i < vec.size(); ++i) {
        cout << "\nvec[" << i << "]:\n";
        vec[i]->Print(cout);
        cout << "Area = " << vec[i]->Area() << "\nVertexes number = ";
        cout << vec[i]->VertexesNumber() << "\n";
    }
}
