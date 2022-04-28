#include "../include/Background.h"
#include "../include/Pixel.h"

Pixel Background::sample(float i, float j)
{
}

Pixel Background::interpolacao(Pixel pixel_0, Pixel pixel_1, float i)
{
}

Pixel Background::interpolacaoBilinear(float i, float j)
{

    Pixel p1 = interpolacao(this->colors[0], this->colors[1], i);
    Pixel p2 = interpolacao(this->colors[2], this->colors[3], i);
    return interpolacao(p1, p2, j);
}