#ifndef CIMGWINBK_H
#define CIMGWINBK_H

#include "CImg.h"
using namespace cimg_library;

class CImgWinBk {
public:
    CImgWinBk(int width, int height, const char* title);
    ~CImgWinBk();

    void DrawButton(int x, int y, int width, int height, const char* text, const unsigned char* backgroundColor);
    bool IsButtonClicked(int x, int y, int mouseX, int mouseY, int width, int height);
    void Display();
    bool IsClosed() const;

private:
    CImg<unsigned char> canvas;
};

#endif
