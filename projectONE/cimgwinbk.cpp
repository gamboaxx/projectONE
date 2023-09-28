#include "CImgWinBk.h"

CImgWinBk::CImgWinBk(int width, int height, const char* title) : canvas(width, height, 1, 3, 0) {
    canvas.display(title);
}

CImgWinBk::~CImgWinBk() {
    
}

void CImgWinBk::DrawButton(int x, int y, int width, int height, const char* text, const unsigned char* backgroundColor) {
    
    canvas.draw_rectangle(x, y, x + width, y + height, backgroundColor);

   
    const unsigned char textColor[] = { 0, 0, 0 };
    canvas.draw_text(x + 10, y + 10, text, textColor);
}

bool CImgWinBk::IsButtonClicked(int x, int y, int mouseX, int mouseY, int width, int height) {
    
    return (mouseX >= x && mouseX <= x + width && mouseY >= y && mouseY <= y + height);
}

void CImgWinBk::Display() {
    canvas.display();
}

