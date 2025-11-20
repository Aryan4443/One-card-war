// Name: (Aryan LAkhani)
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "Card.h"

// default constructor (just making a "blank" card basically)
Card::Card()
{
    rank = '0'; // nothing real, just filler
    suit = 'X'; // same thing, fake suit
}

// constructor when we actually know the rank + suit
Card::Card(char r, char s)
{
    rank = r; // ex: 'A'
    suit = s; // ex: 'H'
}

// show the card (prints like "AS" or "10D")
void Card::display()
{
    cout << rank << suit;
}

// compare this card vs another card
// return 1 if this card is bigger
// return -1 if it’s smaller
// return 0 if they’re equal
int Card::compare(Card other)
{
    // order of ranks low → high
    // (T is being used for 10)
    string ranks = "23456789TJQKA";

    int thisVal = ranks.find(rank);
    int otherVal = ranks.find(other.rank);

    if (thisVal > otherVal)
        return 1;

    if (thisVal < otherVal)
        return -1;

    // only way left is they’re equal
    return 0;
}
