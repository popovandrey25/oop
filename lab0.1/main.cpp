#include "bottle.h"

int main() {
   Bottle a(std:: cin);
   Bottle b(std:: cin);
   a.Difference(b);
   a.Summa(b);
   a.Compare_volume(b);
   a.Compare_filling(b);
   a.Print(std:: cout);
   b.Print(std:: cout);
   return 0;
}
