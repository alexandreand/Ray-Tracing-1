#include "paramset.h"
#include "tinyxml2.h"

tinyxml2::XMLDocument* findDocument(char* path);

tinyxml2::XMLElement* getRootElement(tinyxml2::XMLDocument* doc);

ParamSet* getFilmAttr(tinyxml2::XMLElement* rootElement);