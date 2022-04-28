#include "Pixel.h"

#include <vector>
#include <memory>
#include <string>

#ifndef FILM
#define FILM
class Film {
    private:
        int width;
        int height;
        Pixel** buffer;

    public:
        // Constructor
        Film(int width, int height);
        ~Film();

        void setPixel(int x, int y, Pixel* pixel);

        std::string toString();

        Pixel* operator[](int x);


};

#endif