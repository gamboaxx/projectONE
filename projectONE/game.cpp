#include "Game.h"
#include <iostream>

Game::Game() : currentPlayerIndex(0), clockwise(true) {
}

Game::~Game() {
}

void Game::startGame() {
}

void Game::playTurn() {
}

void Game::zeroRule() {
   
    if (players.size() < 3) {
        std::cout << "No se puede aplicar la regla de la carta '0' con menos de 3 jugadores." << std::endl;
        return;
    }

    int nextPlayerIndex;

    if (clockwise) {
        nextPlayerIndex = (currentPlayerIndex + 1) % players.size();
    }
    else {
        nextPlayerIndex = (currentPlayerIndex + players.size() - 1) % players.size();
    }

    std::cout << "La regla de la carta '0' ha sido aplicada." << std::endl;
}
