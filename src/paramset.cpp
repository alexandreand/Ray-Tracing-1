#include "../include/paramset.h"

#include <iostream>
#include <string>
#include <map>

ParamSet::ParamSet(std::string name){
    this->name = name;
    this->attributes = new std::map<std::string, std::string>();
};
ParamSet::~ParamSet() {
    delete attributes;
};

std::string ParamSet::getName(){
    return this->name;
};


int ParamSet::getAttributeAsInt(std::string name){
    return std::stoi(this->getAttributeAsString(name));
};

double ParamSet::getAttributeAsDouble(std::string name){
    return std::stod(this->getAttributeAsString(name));
};

std::string ParamSet::getAttributeAsString(std::string name){
    return this->attributes->at(name);
};


void ParamSet::setAttribute(std::string name, std::string value){
    this->attributes->insert(std::pair<std::string,std::string>(name, value));
};