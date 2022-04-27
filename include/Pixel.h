
#include <string>

#ifndef PIXEL
#define PIXEL

class Pixel {

    private:
        double red, green, blue;

    public:
        Pixel(double r, double g, double b);
        Pixel();

    public:
        double getRed();
        double getGreen();
        double getBlue();

        void setRed(double r);
        void setGreen(double g);
        void setBlue(double b);

        std::string getString();

        Pixel& operator*=(const double p);

        Pixel& operator+=(const Pixel& p);
        Pixel& operator-=(const Pixel& p);
        Pixel& operator*=(const Pixel& p);

        double length() const;
        double length_squared() const;

};

#endif