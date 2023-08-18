#include "Player.h"

void Player::setChips(uint32_t chips)
{
	this->chips = chips;
#ifdef DEBUG
	std::cout << "The current balance is " << this->chips << " chips" << std::endl;
#endif // DEBUG
}

void Player::setCardOne(Card&& card1)
{
	cardOne = std::move(card1);
}

void Player::setCardTwo(Card&& card2)
{
	cardTwo = std::move(card2);
}

void Player::setBet(uint32_t bet)
{
	this->bet = bet;
}

Player::Player(Card&& card1, Card&& card2, std::string&& username)
{
	setCardOne(std::move(card1));
	setCardTwo(std::move(card2));
	setChips(1000);
	this->username = std::move(username);
#ifdef DEBUG
	std::cout << "The username is " << this->username << " and " << *getCards() << std::endl;
#endif // DEBUG

}

uint32_t Player::getChips()
{
#ifdef DEBUG
	std::cout << chips << " are the chips!\n";
#endif // DEBUG

	return chips;
}

uint32_t Player::getBet()
{
	return bet;
}

std::unique_ptr<std::string> Player::getCards()
{
	std::unique_ptr<std::string> val(new std::string{});

	*val += "The cards are: ";
	*val += *cardOne.getStringRepresentation();
	*val += ", ";
	*val += *cardTwo.getStringRepresentation();

	return std::move(val);
}

std::string& Player::getUsername()
{
	return username;
}

void Player::fold()
{
	m_isFolded = true;
}

bool Player::isFolded()
{
	return m_isFolded;
}

Player::Player()
{
	chips = 1000;
}