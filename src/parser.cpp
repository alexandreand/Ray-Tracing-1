#include "tinyxml2.h"
#include "paranset.h"
#include "parser.h"


tinyxml2::XMLDocument* findDocument(char* path) {
    tinyxml2::XMLDocument* doc = new tinyxml2::XMLDocument();
    doc->LoadFile(path);
    return doc;
};

tinyxml2::XMLElement* getRootElement(tinyxml2::XMLDocument* doc) {
    tinyxml2::XMLElement* rootElenent = doc->RootElement();
    return rootElenent;
};

ParamSet* getFilmAttr(tinyxml2::XMLElement* rootElement){
    
}