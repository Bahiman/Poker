#include "Game.h"

#ifndef SPADES
#define SPADES 1
#define CLUBS 2
#define HEARTS 3
#define DIAMONDS 4
#endif // !SPADES
#ifndef TWO
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 7
#define EIGHT 8
#define NINE 9
#define TEN 10
#define JACK 11
#define QUEEN 12
#define KING 13
#define ACE 14
#endif // TWO

int main()
{
	Game game;
	game.start();
	std::cin.get();
}