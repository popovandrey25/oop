#include "bottle.h"

unsigned long long operator "" _tom3(unsigned long long littres) {
   unsigned long long m3 = littres / 1000;
   return m3;
}


int main(){
   Bottle a;
   std:: cin >> a;
   Bottle b;
   std:: cin >> b;
   Bottle c = a + b;
   std:: cout << c;
   Bottle d;
   std:: cin >> d;
   Bottle f;
   std:: cin >> f;
   Bottle x = d - f;
   std:: cout << x;
   return 0;
}
