// Name: (Aryan LAkhani)
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#ifndef DECK_H
#define DECK_H

#include "Card.h"

// This class represents a deck of 52 cards
class Deck
{
private:
    Card cards[52]; // we must use an array (not vector)
    int top;        // index of next card to deal

public:
    Deck();         // builds the 52 card deck
    Card deal();    // deal one card
    void display(); // show all cards in deck
    void shuffle(); // shuffle deck
};

#endif
