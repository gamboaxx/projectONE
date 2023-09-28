#ifndef GAMEH
#define GAMEH
#include "CardDeck.h"
#include <vector>

class Game {
public:
    Game();
    ~Game();

    void startGame();
    void playTurn();
    void zeroRule();

private:
    CardDeck deck;
    std::vector<std::string> players; 
    int currentPlayerIndex;
    bool clockwise;
    // Otras variables y métodos de juego que necesites.
};

#endif