#pragma once
#include"Player.h"
#include"Card.h"
#include"Deck.h"
#include<vector>
#include<set>

class Game
{
public:
	void start();
	void startBettingRound(uint32_t gameCounter);
	bool everyoneFolded();	
	Game();
	uint32_t m_playerCount;
	uint32_t card;
	uint32_t cardCounter;
	uint32_t currentBet;
	uint32_t roundBet;
	uint32_t m_pot;
	std::vector<Player> m_players;
	std::set<std::string> m_foldedPlayers;
	std::string userWon;
	Deck m_deck;
	void bet();
	void addPlayer();
	int allBetsAreSame();
}; 