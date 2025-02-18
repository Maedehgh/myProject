#ifndef IMAGE_H
#define IMAGE_H
#include "Pixel.h"
#include <vector>

using namespace std;

class Image
{  
    private: 
    Pixel * tab;
    int dimx, dimy;

    public:
    //for initiialiation
    Image();
    //for initialotion with parametr 
    Image(int dimensionX, int dimensionY);
    //for privet part for having the pixel and for changin the pixel
    int getdimX() const;
    int getdimY() const;
    int setdimX(int n) const;
    int setdimY(int n) const;
    //for having the size of the tab,, beacase it is in the privet part i cant have the size directly
    int getTabSize() const;

    //for Destructeur
    ~Image();

    //fro getting the pixeel in the x and y location
    Pixel& getPix(unsigned int x, unsigned int y);

    Pixel getPix(unsigned int x, unsigned int y) const;

    void setPix(unsigned int x, unsigned int y, Pixel couleur);

    void dessinerRectangle(unsigned int Xmin, unsigned int Xmax , unsigned int Ymin ,  unsigned int Ymax, Pixel couleur);

    void effacer(Pixel couleur);

    void sauver(const string &filename) const;


    void ouvrir(const string &filename);

    void afficherConsole();


    static void testRegression();
};

#endif