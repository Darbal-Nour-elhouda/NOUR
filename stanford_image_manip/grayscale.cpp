#include "grayscale.h"
#include "image.h"

Grayscale::Grayscale(string path):Image()
{
    readFromFile(path);
    saturate(-1);
}


