#ifndef TNARYTREE_ITEM_H
#define TNARYTREE_ITEM_H

#include "trapezoid.h"
#include <memory>

class Item{
    public: 
       Item(Point a_, Point b_, Point c_, Point d_);
       Item(Trapezoid a);
       Item(std::shared_ptr<Item> a);
       Item();
       void Set(Trapezoid a);
       void Set_bro(std::shared_ptr<Item> bro_);
       void Set_son(std::shared_ptr<Item> son_);
       Item Get_data();
       std::shared_ptr<Item> Get_bro();
       std::shared_ptr<Item> Get_son();
       void Print(std::ostream &os);
       double Area();
       ~Item();
    private:
        std::shared_ptr<Item> bro = nullptr;
        std::shared_ptr<Item> son = nullptr; 
        Trapezoid data;     
};

#endif