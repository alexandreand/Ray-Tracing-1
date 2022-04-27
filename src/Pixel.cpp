#include "Pixel.h"
#include <string>


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



std::string Pixel::getString(){
    std::string red = std::to_string(static_cast<int>(this->red));
    std::string green = std::to_string(static_cast<int>(this->green));
    std::string blue = std::to_string(static_cast<int>(this->blue));
    return red + " " + green + " " + blue;
};

