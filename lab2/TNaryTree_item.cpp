#include "TNaryTree_item.h"

Item::Item(Point a_, Point b_, Point c_, Point d_){
    data = Trapezoid(a_, b_, c_, d_);
}

Item::Item(){
    data = Trapezoid();
}

Item::Item(Trapezoid a){
    data = a;
}

Item::Item(Item* a){
    bro = a->bro;
    son = a->son;
    data = a->data;
}

void Item::Print(std::ostream &os){
    os << data.Area();
}

double Item::Area(){
    return data.Area();
}

Item::~Item(){};