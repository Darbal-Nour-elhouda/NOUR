#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include "image.h"

class spotlight : public Image
{
public:
    using Image::Image;
    int xCenter;
    int yCenter;
    spotlight(string path,int xCenter,int yCenter);
};

#endif // SPOTLIGHT_H
