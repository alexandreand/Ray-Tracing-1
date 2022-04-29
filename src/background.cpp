
Pixel Background::sample(float i, float j)
{
    return interpolacaoBilinear();
}

Background::Background(Pixel pixel_00, Pixel pixel_01, Pixel pixel_10, Pixel pixel_11, Camera camera)
{
    colors[0] = pixel_00;
    colors[1] = pixel_01;
    colors[2] = pixel_10;
    colors[3] = pixel_11;
    this->camera = camera;
}

Pixel Background::interpolacaoX(Pixel pixel_0, Pixel pixel_1, float i)
{
    pixel_0 *= (camera.film.getWidth() - i) / (camera.film.getWidth() - 0);
    pixel_1 *= (i - 0) / (camera.film.getWidth() - 0);
    pixel_0 += pixel_1;
    return pixel_0;
}

Pixel Background::interpolacaoY(Pixel pixel_0, Pixel pixel_1, float j)
{
    pixel_0 *= (camera.film.getHeight() - j) / (camera.film.getHeight() - 0);
    pixel_1 *= (j - 0) / (camera.film.getHeight() - 0);
    pixel_0 += pixel_1;
    return pixel_0;
}

Pixel Background::interpolacaoBilinear(float i, float j)
{
    Pixel p1 = interpolacaoX(this->colors[0], this->colors[1], i);
    Pixel p2 = interpolacaoX(this->colors[2], this->colors[3], i);
    return interpolacaoY(p1, p2, j);
}