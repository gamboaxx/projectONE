#ifndef CARDH
#define CARDH
#include "CImg.h"
using namespace cimg_library;
class Card {
public:
    enum Color { Red, Yellow, Blue, Green };
    enum Type { Number, Skip, Reverse, DrawTwo, DrawFour, Wild };

    Card();
    Card(Color cardColor, Type cardType, Color wildColor = Red);
    void displayCard(CImg<unsigned char>& canvas, int x, int y);

private:
    Color cardColor;
    Type cardType;
    Color wildColor;
    CImg<unsigned char> cardImage;
};

#endif 