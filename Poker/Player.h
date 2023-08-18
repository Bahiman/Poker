#pragma once
#include"Card.h"
#include<memory>
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

class Card;

class Player
{

public:
	bool eligible = true;
	Player();
	~Player() = default;
	void setChips(uint32_t chips);
	void setCardOne(Card&& card1);
	void setCardTwo(Card&& card2);
	void setBet(uint32_t bet);
	Player(Card&& card1, Card&& card2, std::string&& username);
	uint32_t getChips();
	uint32_t getBet();
	std::unique_ptr<std::string> getCards();
	std::string& getUsername();
	void fold();
	bool isFolded();
	Card cardOne;
	Card cardTwo;
	std::string username;
	uint32_t chips;
	uint32_t max_chips = 0;
	uint32_t bet = 0;
	bool m_isFolded = false;
};