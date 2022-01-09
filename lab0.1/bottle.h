#ifndef BOTTLE_H
#define BOTTLE_H
#include <iostream>

class Bottle {
    public:
        Bottle();
        Bottle(double a, double b);
        Bottle(std::istream &is);
        void Difference(const Bottle &c);
        void Summa(const Bottle &c);
        void Compare_volume(const Bottle &c);
        void Compare_filling(const Bottle &c);
        void Print(std::ostream &os);
        ~Bottle();

    private:
    double volume;
    double filling;

};
#endif
