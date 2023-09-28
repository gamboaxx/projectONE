#include "CardDeck.h"
#include <algorithm>
#include <ctime>

CardDeck::CardDeck() : currentIndex(0) {
    InitializeDeck();
}

CardDeck::~CardDeck() {
    // Destructor (si es necesario).
}

void CardDeck::InitializeDeck() {
    // Agregar cartas al mazo.
    // Por ejemplo:
    // deck.push_back(Card(Card::Red, Card::Number));
    // deck.push_back(Card(Card::Blue, Card::Reverse));
    // ...

    ShuffleDeck();
}

void CardDeck::ShuffleDeck() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::random_shuffle(deck.begin(), deck.end());
}

Card CardDeck::DrawCard() {
    if (currentIndex < deck.size()) {
        Card currentCard = deck[currentIndex];
        currentIndex++;
        return currentCard;
    }
    else {
        return Card(); // Constructor predeterminado para una carta vacía.
    }
}

bool CardDeck::IsEmpty() const {
    return currentIndex >= deck.size();
}
