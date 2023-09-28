#ifndef CARDDECKH
#define CARDDECKH

#include <vector>
#include "Card.h"

class CardDeck {
public:
    CardDeck();
    ~CardDeck();

    void InitializeDeck();
    void ShuffleDeck();
    Card DrawCard();
    bool IsEmpty() const;

private:
    std::vector<Card> deck;
    int currentIndex;
};

#endif 
