#include "Pixel.h"
#include "Film.h"

#include <vector>
#include <memory>
#include <string>


Film::Film(int rows, int cols){
    this->buffer =  new Pixel*[width];
    for (int row = 0; row < rows; row++)
        this->buffer[row] = new Pixel[cols];
};

Film::~Film(){
    for (int row = 0; row < width; row++)
        free(buffer[row]);
    free(buffer);
};

void Film::setPixel(int x, int y, Pixel* pixel) {
    buffer[x][y] = *pixel;
};

std::string Film::toString(){
    std::string text = "";
    for (int row = 0; row < width; row++){
        for (int col = 0; col < height; col ++){
            text += buffer[row][height].toString() + "\n";
        }
    }
    return text;
};

Pixel* Film::operator[](int x){
    return buffer[x];
};