#ifndef GRAYSCALE_H
#define GRAYSCALE_H
#include "image.h"


class Grayscale : public Image
{
public:
    using Image::Image;
    using PNG::writeToFile;
    Grayscale(string path);

};

#endif // GRAYSCALE_H
