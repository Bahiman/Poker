#pragma once
#include"Player.h"
#include"Card.h"
#include"Deck.h"
#include<vector>
#include<set>

class Player;
class Card;
class Deck;

class Game
{
private:
	uint32_t m_playerCount;
	std::vector<Player> m_players;
	Deck m_deck;
	std::string userWon;
	uint32_t pool;
	uint32_t overPool;
	std::set<std::string> m_foldedPlayers;
	uint32_t cardCounter = 0;
	uint32_t m_pot = 0;
public:
	void start();
	void addPlayer();
	void startBettingRound(uint32_t gameCounter);
	bool everyoneFolded();	
}; 