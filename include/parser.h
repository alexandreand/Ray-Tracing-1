#include "paramset.h"
#include "../libs/tinyxml2.h"

namespace Parser{

    tinyxml2::XMLDocument* findDocument(char* path);

    tinyxml2::XMLElement* getRootElement(tinyxml2::XMLDocument* doc);

    ParamSet* getFilmAttr(tinyxml2::XMLElement* rootElement);

    tinyxml2::XMLElement* getWorldAttr(tinyxml2::XMLElement* rootElement);

    ParamSet* getBackgroundAttr(tinyxml2::XMLElement* rootElement);

}