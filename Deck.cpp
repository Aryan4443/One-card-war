// Name: (Aryan LAkhani)
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "Deck.h"
#include <cstdlib> // rand()
#include <ctime>   // time() for seeding

// make the full 52 card deck here
Deck::Deck()
{
    char suits[4] = {'C', 'S', 'D', 'H'}; // clubs, spades, diamonds, hearts
    char ranks[13] = {'A', '2', '3', '4', '5', '6',
                      '7', '8', '9', 'T', 'J', 'Q', 'K'}; // T = 10

    int index = 0; // keep track where we’re putting cards

    // loop suits first, then ranks
    for (int s = 0; s < 4; s++)
    {
        for (int r = 0; r < 13; r++)
        {
            cards[index++] = Card(ranks[r], suits[s]); // stick card in the array
        }
    }

    top = 0; // we’ll deal from the top (start of array)
}

// take one card off the top of deck
Card Deck::deal()
{
    return cards[top++]; // give current card, then move top up
}

// print the whole deck out
void Deck::display()
{
    for (int i = 0; i < 52; i++)
    {
        cards[i].display();

        if ((i + 1) % 13 == 0) // after 13 cards → new line
            cout << endl;
        else
            cout << ",";
    }

    cout << endl; // just for spacing at the end
}

// shuffle by swapping random cards around
void Deck::shuffle()
{
    srand(time(0)); // seed with current time (so diff shuffle each run)

    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52; // random index

        // swap cards[i] with cards[j]
        Card temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }

    top = 0; // reset so we deal from start again
}
