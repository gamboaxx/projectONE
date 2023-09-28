#include "CImg.h"
#include "Card.h"

Card::Card() : cardColor(Card::Red), cardType(Card::Number), wildColor(Card::Red) {
    // Debes cargar la imagen correspondiente aquí.
    // cardImage = ...;
}

Card::Card(Card::Color cardColor, Card::Type cardType, Card::Color wildColor) : cardColor(cardColor), cardType(cardType), wildColor(wildColor) {
    // Debes cargar la imagen correspondiente aquí.
    // cardImage = ...;
}

void Card::displayCard(CImg<unsigned char>& canvas, int x, int y) {
    // Lógica para mostrar la carta en el lienzo.
    // Debes implementar esta función según tus necesidades.
}
