#include "Card.h"

Card::Card(int16_t suite_, int16_t value_)
{
	suite = suite_;
	value = value_;
#ifdef DEBUG
		std::cout << "The card is: "<< *getStringRepresentation() << std::endl;
#endif // DEBUG
}

const int16_t Card::getSuite() 
{
#ifdef DEBUG
	std::cout << "The suite is " << *getStringRepresentationOfSuite() << std::endl;
#endif // DEBUG

	return suite;
}

const int16_t Card::getValue()
{
#ifdef DEBUG
	std::cout << "The value is " << *getStringRepresentationOfValue() << std::endl;
#endif // DEBUG

	return value;
}

void Card::setSuite(int16_t suite_)
{
	suite = suite_;

#ifdef DEBUG
	std::cout << getStringRepresentationOfSuite() << " is the suite" << std::endl;
#endif // DEBUG
}

void Card::setValue(int16_t value_)
{
	value = value_;

#ifdef DEBUG
	std::cout << *getStringRepresentationOfValue() << " is the value" << std::endl;
#endif // DEBUG

}
																																																										
std::unique_ptr<std::string> Card::getStringRepresentation()
{
	std::unique_ptr<std::string> val(new std::string{});

	*val += *getStringRepresentationOfValue();

	*val += " of ";

	*val += *getStringRepresentationOfSuite();

	return std::move(val);
}

std::unique_ptr<std::string> Card::getStringRepresentationOfSuite()
{
	
	std::unique_ptr<std::string> val(new std::string{});

	if (this->suite == SPADES)
	{
		*val = "Spades";
	}
	else if (this->suite == CLUBS)
	{
		*val = "Clubs";
	}
	else if (this->suite == HEARTS)
	{
		*val = "Hearts";
	}
	else if (this->suite == DIAMONDS)
	{
		*val = "Diamonds";
	}
	else
	{
		*val = "Invalid suite";
	}

	return std::move(val);
}

std::unique_ptr<std::string> Card::getStringRepresentationOfValue()
{
	std::unique_ptr<std::string> val(new std::string{});

	if (this->value == TWO)
	{
		*val += "Two";
	}
	else if (this->value == THREE)
	{
		*val += "Three";
	}
	else if (this->value == FOUR)
	{
		*val += "Four";
	}
	else if (this->value == FIVE)
	{
		*val += "Five";
	}
	else if (this->value == SIX)
	{
		*val += "Six";
	}
	else if (this->value == SEVEN)
	{
		*val += "Seven";
	}
	else if (this->value == EIGHT)
	{
		*val += "Eight";
	}
	else if (this->value == NINE)
	{
		*val += "Nine";
	}
	else if (this->value == TEN)
	{
		*val += "Ten";
	}
	else if (this->value == JACK)
	{
		*val += "Jack";
	}
	else if (this->value == QUEEN)
	{
		*val += "Queen";
	}
	else if (this->value == KING)
	{
		*val += "King";
	}
	else if (this->value == ACE)
	{
		*val += "Ace";
	}
 	else
	{
		*val += " Invalid value";
	}

	return std::move(val);
}
		