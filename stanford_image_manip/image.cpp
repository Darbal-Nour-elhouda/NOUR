#include "image.h"

Image::Image(string path):PNG()
{
    readFromFile(path);
}

void Image:: lighten(double amount)
{
    for(unsigned x = 0; x < width() ; x++)
    for(unsigned y = 0; y < height(); y++)
    {
       //reference on the pixel
       HSLAPixel &P = getPixel(x, y);

       //modifiy the element of P
       P.l+=amount;
       P.l=(P.l>1)?1:P.l;
       P.l=(P.l<0)?0:P.l;
    }
}
void Image:: saturate(double amount)
{
    for(unsigned x = 0; x < width() ; x++)
    for(unsigned y = 0; y < height(); y++)
    {
       //reference on the pixel
       HSLAPixel &P = getPixel(x, y);

       //modifiy the element of P
       P.s+=amount;
       P.s=(P.s<0)?0:P.s;
       P.s=(P.s>1)?1:P.s;

    }
}
void Image:: rotateColor(double angle)
{
    for(unsigned x = 0; x < width() ; x++)
    for(unsigned y = 0; y < height(); y++)
    {
       //reference on the pixel
       HSLAPixel &P = getPixel(x, y);

       //modifiy the element of P
     P.h+=angle;
     while(P.h>360)
         P.h-=360;
     while(P.h<0)
         P.h+=360;
    }
}


