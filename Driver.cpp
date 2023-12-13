#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Game.h"
#include "Game.cpp"
#include "Card.h"
#include "Card.cpp"
#include "Player.h"
#include "Player.cpp"

Card parseCardLine(const std::string& line) {
    std::istringstream iss(line);
    Card card;
    card_information information;

    int clan, race, triggerIcon, mainType, subType, specialType, skillIcon, specialIcon;

    iss >> information.name >> clan >> race
        >> information.grade >> information.power >> information.shield 
        >> information.critical >> triggerIcon
        >> mainType >> subType
        >> specialType >> skillIcon
        >> information.cardText >> specialIcon
        >> information.drive;

    return card;
}

int main() {
    std::ifstream file("deck1.txt");
    std::string line;
    std::vector<Card> deck;

    while(std::getline(file, line)) {
        if (!line.empty()) {
            int count;
            std::istringstream(line) >> count;

            for (int i = 0; i < count; i++) {
                deck.push_back(parseCardLine(line.substr(2)));
            }
        }
    }

    file.close();

    Player player1, player2;


    return 0;
}
