#include "../include/api.c"

int render(){
	auto h = camera.film.width();
	auto h = camera.film.height();

	for (int j = 0; j < h; ++j)
	{
		for (int  i = 0; i < w; ++i)
		{
			auto color = background.sample(float(i)/float(w), float(j)/float(h));
			camera.film.add(Point2{i, j}, color);
		}
	}
	camera.film.write_image();
}