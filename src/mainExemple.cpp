#include "Image.h"



int main()
{
    Pixel vert (24,207,50);
    Pixel orange (232,172,42);
    Pixel rose (230,119,182);
    Image image1 (128,64);
    image1.effacer(rose);
    image1.dessinerRectangle(10, 10, 31, 52, vert);
    image1.setPix(20,22,orange);
    image1.setPix(100,50,orange);
    image1.sauver("./data/image1.ppm");
    Image image2;
    image2.ouvrir("./data/image1.ppm");
    image2.dessinerRectangle(80, 40, 110, 57, vert);
    image2.dessinerRectangle(21, 26, 39, 36, orange);
    image2.sauver("./data/image2.ppm");
    
    return 0;
}