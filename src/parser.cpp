#include "../libs/tinyxml2.h"
#include "../include/paramset.h"
#include "../include/parser.h"

#include <string>
#include <iostream>

tinyxml2::XMLDocument* Parser::findDocument(char* path) {
    tinyxml2::XMLDocument* doc = new tinyxml2::XMLDocument();
    doc->LoadFile(path);
    return doc;
};

tinyxml2::XMLElement* Parser::getRootElement(tinyxml2::XMLDocument* doc) {
    tinyxml2::XMLElement* rootElenent = doc->RootElement();
    return rootElenent;
};

ParamSet* Parser::getFilmAttr(tinyxml2::XMLElement* rootElement){
    ParamSet* paramSet = new ParamSet("film");
    tinyxml2::XMLElement* film = rootElement->FirstChildElement("film");
    paramSet->setAttribute("type", std::string(film->Attribute("type")));
    paramSet->setAttribute("x_res", std::string(film->Attribute("x_res")));
    paramSet->setAttribute("y_res", std::string(film->Attribute("y_res")));
    paramSet->setAttribute("filename", std::string(film->Attribute("filename")));
    paramSet->setAttribute("img_type", std::string(film->Attribute("img_type")));
    return paramSet;
}

tinyxml2::XMLElement* Parser::getWorldAttr(tinyxml2::XMLElement* rootElement){
    return NULL;
};

ParamSet* Parser::getBackgroundAttr(tinyxml2::XMLElement* rootElement){
    ParamSet* paramSet = new ParamSet("background");
    tinyxml2::XMLElement* background = rootElement->FirstChildElement("background");

    paramSet->setAttribute("type", std::string(background->Attribute("type")));
    paramSet->setAttribute("mapping", std::string(background->Attribute("mapping")));

    try {
        paramSet->setAttribute("color", std::string(background->Attribute("color")));
    } catch ( const std::out_of_range ex){
        paramSet->setAttribute("color", "");
    }

    try {
        paramSet->setAttribute("bl", std::string(background->Attribute("bl")));
        paramSet->setAttribute("br", std::string(background->Attribute("br")));
        paramSet->setAttribute("tl", std::string(background->Attribute("tl")));
        paramSet->setAttribute("tr", std::string(background->Attribute("tr")));
    } catch ( const std::out_of_range ex){
        paramSet->setAttribute("bl", "");
        paramSet->setAttribute("br", "");
        paramSet->setAttribute("tl", "");
        paramSet->setAttribute("tr", "");
    }

    std::cout << "Aqui" << std::endl;

    return paramSet;
};