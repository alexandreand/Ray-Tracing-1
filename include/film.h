#include "pixel.h"

#include <vector>
#include <memory>
#include <string>

class Film
{

private:
    int width;
    int height;
    Pixel **buffer;

public:
    // Constructor
    Film(int width, int height);
    ~Film();

    void setPixel(int x, int y, Pixel *pixel);
    void write_image();
    int getWidth();
    int getHeight();

    std::string toString();

    Pixel *operator[](int x);
};