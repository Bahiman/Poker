#include "Deck.h"
#include<algorithm>

	void Deck::setDeck()
	{	
		for (int i = 2; i <= ACE; i++)
		{
			for (int j = 1; j <= 4; j++)
			{
				m_cards.emplace_back(j, i);
			#ifdef DEBUG
				std::cout << *m_cards[m_cards.size() - 1].getStringRepresentation() << "???" << std::endl;
			#endif // DEBUG
			}
		}
	}

	void Deck::shuffle()
	{
		std::random_device rd;
		std::mt19937 g(rd());
		std::shuffle(m_cards.begin(), m_cards.end(), g);

	#ifdef DEBUG
		std::cout << "Shuffling!" << std::endl;
	#endif // DEBUG
	}

	void Deck::printAllCards()
	{
		for (auto& k : m_cards)
		{
			std::cout << *k.getStringRepresentation() << std::endl;
		}
	}

Deck::Deck()
{
	m_cards = {};
	setDeck();
	shuffle();
}

void Deck::erase(int index)
{
	// erase the indeces from 0 to index
	m_cards.erase(m_cards.begin(), m_cards.begin() + index);
}

Card&& Deck::operator[](int index)
{
	return std::move(m_cards[index]);
}