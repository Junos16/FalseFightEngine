/*
Init Game
    Get players
    Get deck
    Select starter



Main Loop
    Draw Phase
        Stand Step
        Draw Step
    Ride Phase
        Ride Step
        Stride Step
    Main Phase
    Battle Phase
    End Phase
*/

#include "Cards.h"
#include "Effects.h"
#include "Players.h"
#include "Game.h"
#include <vector>



int main() {
    std::vector<Player*> players;
    get_players(players);
    Game this_game(players);
    this_game.pre_game_setup(); // select starter, mulligan, coin toss

    


   return 0; 
}


