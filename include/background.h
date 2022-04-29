#include "Background.h"
#include "pixel.h"
#include "camera.h"

class Background
{
public:
    Pixel colors[4];
    Camera camera;

    Background(Pixel pixel_00, Pixel pixel_01, Pixel pixel_10, Pixel pixel_11);

    Pixel sample(float i, float j);
    Pixel interpolacaoX(Pixel pixel_0, Pixel pixel_1, float i);
    Pixel interpolacaoY(Pixel pixel_0, Pixel pixel_1, float i);
    Pixel interpolacaoBilinear(float i, float j);
};
