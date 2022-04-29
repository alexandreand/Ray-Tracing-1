#include "../include/pixel.h"
#include <string>
#include <cmath>

Pixel::Pixel(){
    red = 0;
    green = 0;
    blue = 0;
}

Pixel::Pixel(double r, double g, double b){
    red = r;
    green = g;
    blue = b;
}


double Pixel::getRed(){
    return this->red;
};

double Pixel::getGreen(){
    return this->green;
};

double Pixel::getBlue(){
    return this->blue;
};

void Pixel::setRed(double r) {
    this->red = r;
};

void Pixel::setGreen(double g) {
    this->green = g;
};

void Pixel::setBlue(double b) {
    this->blue = b;
};


std::string Pixel::toString(){
    std::string red = std::to_string(static_cast<int>(this->red));
    std::string green = std::to_string(static_cast<int>(this->green));
    std::string blue = std::to_string(static_cast<int>(this->blue));
    return red + " " + green + " " + blue;
};


Pixel& Pixel::operator*=(const double p){
    red *= p;
    green *= p;
    blue *= p;
    return *this;
};

Pixel& Pixel::operator+=(const Pixel& p) {
    red += p.red;
    green += p.green;
    blue += p.blue;
    return *this;
};

Pixel& Pixel::operator-=(const Pixel& p) {
    red -= p.red;
    green -= p.green;
    blue -= p.blue;
    return *this;
};

Pixel& Pixel::operator*=(const Pixel& p) {
    red *= p.red;
    green *= p.green;
    blue *= p.blue;
    return *this;
};


double Pixel::length() const {
    return sqrt(length_squared());
};

double Pixel::length_squared() const {
    return this->red * this->red + this->green * this->green + this->blue * this->blue;
};