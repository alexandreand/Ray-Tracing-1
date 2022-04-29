#include "../include/api.h"
#include "../include/background.h"
#include "../include/camera.h"

int render()
{
	Camera camera = Camera();
	Background background = Background(Pixel pixel_00, Pixel pixel_01, Pixel pixel_10, Pixel pixel_11);

	auto h = camera.film.getHeight();
	auto w = camera.film.getWidth();

	for (int j = 0; j < h; ++j)
	{
		for (int i = 0; i < w; ++i)
		{
			auto color = background.sample(float(i) / float(w), float(j) / float(h));
			camera.film.add(Point2{i, j}, color);
		}
	}
	camera.film.write_image();
}