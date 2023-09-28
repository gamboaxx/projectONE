#include <iostream>
#include <vector>
#include <cstdlib>
#include "CImg.h"
using namespace std;
using namespace cimg_library;


int main()
{
    CImgDisplay window(800, 600);
    CImg<unsigned char> bk("C:\\Users\\gambo\\Downloads\\FONDO.PNG");

    while (!window.is_closed()) {
       
        bk.display(window);

       
        const int botonX = 200;
        const int botonY = 200;
        const int botonAncho = 200;
        const int botonAlto = 50;

       
        if (window.button() && window.mouse_x() >= botonX && window.mouse_x() <= botonX + botonAncho &&
            window.mouse_y() >= botonY && window.mouse_y() <= botonY + botonAlto) {
            
            std::cout << "Botón 'Jugador vs PC' clicado." << std::endl;
        }

        
        cimg::wait(20);  
    }

    return 0;
}
