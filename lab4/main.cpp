#include "TNaryTree.h"
#include "trapezoid.h"

int main(void)
{
    TNaryTree<Trapezoid> t(5);
    t.Update(Trapezoid(Point(0, 0), Point(1, 0),Point(1, 2), Point(0, 2)), "");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "b");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "bb");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "bbc");
    t.Update(Trapezoid(Point(0, 0), Point(4, 0),Point(4, 1), Point(0, 1)), "c");
    std::cout << t.size() << "\n";
    std::cout << t.Area("") << "\n";
    std::cout << t.size() << "\n";
    std::cout << t;
    TNaryTree<Trapezoid> q(t);
    t.Clear();
    std::cout << q.size() << " " << q.Area("") << "\n";
    std::cout << q;
    return 0;
}