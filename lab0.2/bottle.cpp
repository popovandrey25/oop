#include "bottle.h"
#include <cmath>

Bottle::Bottle() {
    volume = 0.0;
    filling = 0.0;
    std:: cout << "Start: " << std:: endl;
}

Bottle::Bottle(double a, double b) {
    if (a > 0.0 && b > 0.0 && b > 1){
        volume = a;
        filling = b;
    }
    else {
        std:: cout << "Please enter correct numbers!" << std:: endl;
    }
    std:: cout << "The bottle according to your parameters has been created" << std:: endl;
}

Bottle::Bottle(std::istream &is) {
    std:: cout << "Please enter your bottle data: " << std:: endl;
    is >>  volume >> filling;
    if ((volume <= 0.0) || (filling <= 0.0) || (filling > 1)) {
        std:: cout << "Invalind input. Enter again!" << std:: endl;
        is >> volume >> filling;
    }
    std:: cout << "The bottle has been created via istream" << std:: endl;
}

void Bottle::Difference(const Bottle &c) {
    double differ = volume*filling - c.volume*c.filling;
    std:: cout << "Difference: " << differ << std:: endl;
}

void Bottle::Summa(const Bottle &c) {
    double bottle = volume*filling + c.volume*c.filling;
    std:: cout << "Total volume: " << bottle << std:: endl; 
}

void Bottle::Compare_volume(const Bottle &c) {
    if (volume > c.volume){
        std:: cout << "The first bottle is larger!" << std:: endl;
    }
    else if (volume == c.volume) {
        std:: cout << "Volumes are equal!" << std:: endl;
    }
    else {
        std:: cout << "The second bottle is larger!" << std:: endl;
    }    
}

void Bottle::Compare_filling(const Bottle &c) {
    if (volume*filling > c.volume*c.filling){
        std:: cout << "The filling of first bottle is larger!" << std:: endl;
    }
    else if (volume*filling == c.volume*c.filling) {
        std:: cout << "Bottles are equal!" << std:: endl;
    }
    else {
        std:: cout << "The filling of second bottle is larger!" << std:: endl;
    }    
}

void Bottle::Print(std::ostream& os) {
    os << "Your bottle is: " << volume << ", " << filling << ", " << volume*filling << "l" << std:: endl;
}

std::istream& operator >> (std::istream& is, Bottle &object) {
    std:: cout << "Please enter your bottle data: " << std:: endl;
    is >>  object.volume >> object.filling;
    if ((object.volume <= 0.0) || (object.filling <= 0.0) || (object.filling > 1)) {
        std:: cout << "Invalind input. Enter again!" << std:: endl;
        is >> object.volume >> object.filling;
    }
    std:: cout << "The bottle has been created via istream" << std:: endl;
    return is;
}

Bottle Bottle::operator + (const Bottle &other) {
    this->volume += other.volume;
    this->filling = 1;
    return *this;
}

Bottle Bottle::operator - (const Bottle &other) {
    this->volume -= other.volume;
    this->filling = 1;
    return *this;
}

bool Bottle::operator < (const Bottle &other) {
    if (volume*filling < other.volume*other.filling) {
        return true;
    }
    else {
        return false;
    }
}

bool Bottle::operator > (const Bottle &other) {
    if (volume*filling > other.volume*other.filling) {
        return true;
    }
    else {
        return false;
    }
}

std::ostream& operator << (std::ostream& os, Bottle &object) {
    os << object.volume << ";" << object.filling<< std:: endl;
    return os;
}

bool Bottle::operator == (const Bottle &object) {
    if (volume == object.volume && filling == object.filling) {
        return true;
    }
    return false;
}

Bottle::~Bottle() {
    std:: cout << "FROM DESTRUCTOR: Your bottle has been deleted" << std:: endl;
}
