#include "Table.h"

std::vector<Card>& Table::getDeck()
{
    // TODO: insert return statement here
    return deck;
}

std::vector<Card>& Table::getTableCards()
{
    // TODO: insert return statement here
    return tableCards;
}

std::vector<Player>& Table::getPlayers()
{
    // TODO: insert return statement here
    return playerList;
}

void Table::setPlayers(uint16_t count)
{
    players = count;
}

uint16_t Table::getPlayersCount()
{
    return players;
}
