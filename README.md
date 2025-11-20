# One Card WAR — README

## Overview
A simple 2-player game: deal one face-up card to each player; highest rank wins, equal ranks tie. You’ll build `Card` and `Deck` classes in a **single .cpp file** and play multiple games, tracking player stats. If requested games exceed available cards, `Deck::deal()` must **throw**, and `main` must **catch** and report the error. Use a `vector` (not an array) to store cards.

## Requirements
- **Classes**
  - `class Card` with `Card(char rank, char suit)`, `void display()`, `int compare(Card)` (1 = win, 0 = tie, −1 = lose).
  - `class Deck` with `Deck()`, `Card deal()`, `void display()`, `void shuffle()`, `bool isEmpty()`.
- **Struct**
  - `struct Player { string name; int win, lose, tie; };` Track stats for each player.
- **Program flow**
  1) Create deck  
  2) Ask two names  
  3) Ask how many games  
  4) Display **original (unshuffled)** deck  
  5) Shuffle  
  6) Display **shuffled** deck  
  7) Play N games, print winner/tie each game  
  8) Print final stats
- **Exception**
  - Throw in `Deck::deal()` when deck is empty; catch in `main`.
- **File structure**
  - One source file (`war.cpp`). Use `std::vector<Card>` inside `Deck`.

## Build & Run

### g++ (macOS/Linux)
```bash
g++ war.cpp -o war
./war
