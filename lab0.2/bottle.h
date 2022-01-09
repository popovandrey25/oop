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

        Bottle operator + (const Bottle &object);
        Bottle operator - (const Bottle &object);
        bool operator == (const Bottle &object);
        bool operator > (const Bottle &other);
        bool operator < (const Bottle &other);
        friend std::istream& operator >> (std::istream& is, Bottle &object);
        friend std::ostream& operator << (std::ostream& os, Bottle &object);

        ~Bottle();

    private:
    double volume;
    double filling;

};
#endif
