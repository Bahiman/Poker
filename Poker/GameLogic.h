#pragma once
#include"Player.h"
#include"Card.h"
#include"Deck.h"
#include"Game.h"
#include<vector>

class GameLogic
{
private:
	struct Pair
	{
		int value1;
		int value2;
		int count;
		Pair(int one, int two, int coun) : value1{one}, value2{two}, count{coun} {}
	};
	std::vector<Player>& players;
	std::vector<Card>& tableCards;
	int hasPair(Player& player);
	int hasTwoPairs(Player& player);
	int hasThreeOfAKind(Player& player);
	int hasStraight(Player& player);
	int hasFlush(Player& player);
	int hasFullHouse(Player& player);
	int hasFourOfAKind(Player& player);
	int hasStraightFlush(Player& player);
	int hasRoyalFlush(Player& player);
	bool cardsHaveSameSuite(Card& card1, Card& card2);
	int	 cardsHaveSameValue(Card& card1, Card& card2);
	public:
	std::string playerWon();
	GameLogic(std::vector<Player>& players_, std::vector<Card>& tableCards_);
	GameLogic() = default;
	~GameLogic() = default;
};