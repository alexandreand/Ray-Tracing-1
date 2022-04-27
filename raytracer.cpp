#include <iostream>
#include <string>
#include <stdexcept>

void helpMessage();

struct runningOptions
{
	std::string cropwindow;
	std::string outfile;
	bool quick;

} runningOptions;

struct runningOptions OPTIONS;

int main(int argc, char*argv[]) {

	// for (int arg = 0; arg < argc; arg++) {
	// 	std::string argument(argv[arg]);
		
	// 	if (argument == "--help") {
	// 		helpMessage();
	// 		return 0;
	// 	}

	// 	if (argument == "--cropwindow")
	// 		OPTIONS.cropwindow = std::string(argv[++arg]);
	// 	else if (argument == "--outfile")
	// 		OPTIONS.outfile = std::string(argv[++arg]);
	// 	else if (argument == "--quick")
	// 		OPTIONS.quick = true;
	// }

	// Image

    const int image_width = 256;
    const int image_height = 256;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = image_height-1; j >= 0; --j) {
        for (int i = 0; i < image_width; ++i) {
            auto r = double(i) / (image_width-1);
            auto g = double(j) / (image_height-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

	return 0;
}

void helpMessage() {
	std::cout << "Usage: rt3 [<options>] <input_scene_file>" << std::endl;
	std::cout << "\tRendering simulation options:" << std::endl;
	std::cout << "\t\t--help Print this help text." << std::endl;
	std::cout << "\t\t--cropwindow <x0,x1,y0,y1> Specify an image crop window." << std::endl;
	std::cout << "\t\t--quick Reduces quality parameters to render image quickly" << std::endl;
	std::cout << "\t\t--outfile <filename> Write the rendered image to <filename>." << std::endl;
}
