// Name: (Aryan LAkhani)
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

// This class represents a single playing card
class Card
{
private:
    char rank; // 'A', '2', ..., 'K'
    char suit; // 'C' = Clubs, 'S' = Spades, 'D' = Diamonds, 'H' = Hearts

public:
    Card();                  // default constructor
    Card(char r, char s);    // constructor with rank + suit
    void display();          // print card like "10S" or "AC"
    int compare(Card other); // compare this card with another
};

#endif
