#include <iostream>
#include <cstring>
#include <string>
#include "include/parser.h"
#include "libs/tinyxml2.h"

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
	// 	} else if (argument == "--cropwindow")
	// 		OPTIONS.cropwindow = std::string(argv[++arg]);
	// 	else if (argument == "--outfile")
	// 		OPTIONS.outfile = std::string(argv[++arg]);
	// 	else if (argument == "--quick")
	// 		OPTIONS.quick = true;
	// }

	std::string str = "scene_01.xml";
	char* path = strcpy(new char[str.length()+1], str.c_str());

	tinyxml2::XMLDocument* doc = Parser::findDocument(path);
	tinyxml2::XMLElement* rootElement = Parser::getRootElement(doc);

	ParamSet* paramset = Parser::getFilmAttr(rootElement);
	std::cout << paramset->getAttributeAsString("type") << std::endl;
	std::cout << paramset->getAttributeAsDouble("x_res") << std::endl;
	std::cout << paramset->getAttributeAsDouble("y_res") << std::endl;

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
