#pragma once
#include"Card.h"
#include<vector>
#include <random>

class Card;

class Deck
{
private:
	std::vector<Card> m_cards;
	void setDeck();
	void shuffle();
public:
	int size = 52;
	void printAllCards();
	Deck();
	~Deck() = default;
	void erase(int index);
	Card&& operator[](int index);	
};