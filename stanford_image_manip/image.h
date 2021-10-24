#ifndef IMAGE_H
#define IMAGE_H
#include "PNG.h"

class Image : public PNG
{
public:
    using PNG::PNG;

    Image(string path);
    void saturate(double amount);
    void lighten(double amount);
    void rotateColor(double angle);
};

#endif // IMAGE_H
