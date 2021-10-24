#include "spotlight.h"
#include "math.h"

spotlight::spotlight(string path,int xCenter,int yCenter)
{
    readFromFile(path);
    for(unsigned x = 0; x < width() ; x++)
    for(unsigned y = 0; y < height(); y++)
    {
       //reference on the pixel
       HSLAPixel &P = getPixel(x, y);
       double dist=sqrt((x-xCenter)*(x-xCenter)+(y-yCenter)*(y-yCenter));
       P.l=(dist<=160)?P.l-dist*P.l*0.005:0.2*P.l;

       //modifiy the element of P
    }

}
