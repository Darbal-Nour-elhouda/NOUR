#include "illini.h"

Illini::Illini(string path,int col1,int col2):Image()
{
    readFromFile(path);
    for(unsigned x = 0; x < width() ; x++)
     for(unsigned y = 0; y < height(); y++)
     {
        //reference on the pixel
        HSLAPixel &P = getPixel(x, y);

        //modifiy the element of P
        P.h=(P.h>=103 && P.h<=293)?P.h=col2:P.h=col1;
     }

}

