// Name: (Aryan LAkhani)
// Class (CECS 325-01)
// Project Name (Prog 1 – One Card War)
// Due Date (09/18/2025)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "Deck.h"
#include <iostream>
using namespace std;

int main()
{
    string player1, player2;
    Deck deck; // make a fresh deck right away

    // grab names of both players
    cout << "Enter the name of the first player: ";
    cin >> player1;

    cout << "Enter the name of the second player: ";
    cin >> player2;

    // print deck before shuffle
    cout << "\nOriginal Deck\n";
    deck.display();

    // shuffle it up
    deck.shuffle();

    // now print deck after shuffle
    cout << "\nShuffled Deck\n";
    deck.display();

    // counters for who wins / loses / ties
    int wins1 = 0;
    int wins2 = 0;
    int ties = 0;

    // play 26 games (2 cards each = 52 cards total)
    for (int game = 1; game <= 26; game++)
    {
        cout << "\nGame " << game << "\n";
        cout << "--------\n";

        Card c1 = deck.deal(); // player1’s card
        Card c2 = deck.deal(); // player2’s card

        // show cards
        cout << "    " << player1 << "=>";
        c1.display();
        cout << endl;

        cout << "    " << player2 << "=>";
        c2.display();
        cout << endl;

        // figure out winner
        int result = c1.compare(c2);

        if (result == 1)
        {
            cout << player1 << "=> Winner\n";
            wins1++;
        }
        else if (result == -1)
        {
            cout << player2 << "=> Winner\n";
            wins2++;
        }
        else
        {
            cout << "Tie game\n";
            ties++;
        }
    }

    // after all games, show final scorecard
    cout << "\n------Final Stats-------\n";
    cout << "       " << player1 << " vs. " << player2 << endl;

    cout << "Wins   " << wins1 << "          " << wins2 << endl;
    cout << "Losses " << wins2 << "          " << wins1 << endl;
    cout << "Ties   " << ties << "          " << ties << endl;

    return 0;
}
