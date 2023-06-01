#pragma once
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
#include<iostream>
#include<memory>

class Card
{
private:
	int16_t suite;
	int16_t value;
public:
	Card() = default;
	~Card() = default;
	Card(int16_t suite_, int16_t value_);
	const int16_t getSuite();
	const int16_t getValue();
	void setSuite(int16_t suite_);
	void setValue(int16_t value_); 
	std::unique_ptr<std::string> getStringRepresentation();
	std::unique_ptr<std::string> getStringRepresentationOfSuite();																
	std::unique_ptr<std::string> getStringRepresentationOfValue();
};
