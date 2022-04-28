#include <string>
#include <map>

class ParamSet {

    private:
        std::string name;
        std::map<std::string, std::string>* attributes;

    public:
        ParamSet(std::string name);
        ~ParamSet();
    
        std::string getName();
        int getAttributeAsInt(std::string name);
        double getAttributeAsDouble(std::string name);
        std::string getAttributeAsString(std::string name);
        
        void setAttribute(std::string name, std::string value);

};
