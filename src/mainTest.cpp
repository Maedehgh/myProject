#include <string.h>
#include <fstream>
#include <iostream>
#include "Pixel.h"
#include "Image.h"

using namespace std;

int main()
{
    Image image(4, 3);
    image.effacer(Pixel(255, 0, 0)); // Red background
    image.setPix(2, 1, Pixel(0, 255, 0)); // A green pixel
    image.sauver("test.ppm");

    //Image::testRegression();
    //Pixel p1;
    //Pixel p2(255, 255, 255);
    //Image im1;
    //Image im2(100,100);

    //to see if it works for pixel
    ///cout<<p2.r<<"----"<<p2.g<<endl;
    ///cout<<p1.r<<endl;
    //test for image
    ///cout<<im1.getdimX()<<im1.getdimY()<<endl;
    //test for geting thr pix
    //Pixel& p = im2.getPix(20,40);
    //Pixel pp = im2.getPix(40,50);
    //cout<<pp.r<<endl<<pp.g<<pp.b<<endl;

    return 0;
    
}