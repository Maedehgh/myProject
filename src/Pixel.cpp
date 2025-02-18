#include "Pixel.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


//collor black
Pixel::Pixel()
   {
    r = 0;
    g = 0;
    b = 0;

   }
//color:with parametres
Pixel::Pixel(int nr,int ng,int nb)
   {
      r = nr;
      g = ng;
      b = nb;
   }