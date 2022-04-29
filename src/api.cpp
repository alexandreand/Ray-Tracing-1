#include "../include/api.h"
#include "../include/background.h"
#include "../include/camera.h"
#include "../include/film.h"

int render()
{
	int prov1;

	Film film = Film(prov1, prov1);
	Camera camera = Camera(film);
	Background background = Background(pixel_00, pixel_01, pixel_10, pixel_11);

	auto h = camera.film.getHeight();
	auto w = camera.film.getWidth();

	for (int j = 0; j < h; ++j)
	{
		for (int i = 0; i < w; ++i)
		{
			Pixel pixel = background.sample(float(i) / float(w), float(j) / float(h));
			camera.film.setPixel(j, i, &pixel);
		}
	}
	camera.film.toString();
}