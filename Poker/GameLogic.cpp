#include "GameLogic.h"

int GameLogic::hasPair(Player& player)
{	
	if (player.cardOne.getValue() == player.cardTwo.getValue())
		return player.cardTwo.getValue();
	else
	{
		auto cardOneValue = player.cardOne.getValue();
		auto cardTwoValue = player.cardTwo.getValue();
		for (auto& card : tableCards)
		{
			if (card.getValue() == cardOneValue)
				return cardOneValue;
			else if (card.getValue() == cardTwoValue)
				return cardTwoValue;
		}
	}
	return 0;						
}

int GameLogic::hasTwoPairs(Player& player)
{
	std::set<int> check = { hasPair(player), hasPair(player)};
	// if the size of the set is two then it means that there are two different pairs
	if (check.size() == 2)
	{
		// return the biggest pair
		return *check.rbegin();
	}
	else
	{
		return 0;
	}
}

int GameLogic::hasThreeOfAKind(Player& player)
{
	return 0;
}

int GameLogic::hasStraight(Player& player)
{
	return 0;
}

int GameLogic::hasFlush(Player& player)
{
	return 0;
}

int GameLogic::hasFullHouse(Player& player)
{
	return 0;
}

int GameLogic::hasFourOfAKind(Player& player)
{
	return 0;
}

int GameLogic::hasStraightFlush(Player& player)
{
	return 0;
}

int GameLogic::hasRoyalFlush(Player& player)
{
	return 0;
}

int GameLogic::cardsHaveSameValue(Card& card1, Card& card2)
{
	if (card1.getValue() == card2.getValue())
	{
		return card1.getValue();
	}
	else
	{
		return 0;
	}
}

std::string GameLogic::playerWon()
{
	return std::string();
}

GameLogic::GameLogic(std::vector<Player>& players_, std::vector<Card>& tableCards_) : players(players_), tableCards(tableCards_)
{
}
 