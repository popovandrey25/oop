#include <iostream>
#include "TNaryTree_item.h"
#include "point.h"
#include "trapezoid.h"
#include "figure.h"
#include "TNaryTree.h"

int main(){
    TNaryTree t(5);
    t.Update(Trapezoid(Point(0, 0), Point(1, 0),Point(1, 1), Point(0, 1)), "");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "b");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "bb");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "bbc");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "c");
    std::cout << t.size() << "\n";
    std::cout << t.Area("") << "\n";
    std::cout << t.size() << "\n";
    TNaryTree q(t);
    std::cout << q.size() << " " << q.Area("") << "\n";
    std::cout << t;
    t.Clear("");
    std::cout << t.Area("") << "\n";
}
