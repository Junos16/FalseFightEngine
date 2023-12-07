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

#include <ctime>
#include <cstdlib>
#include "Card.h"
#include "Game.h"
#include "Player.h"
#include "Player.cpp"


Game::Game() {
    Player* player1 = new Player;
    Player* player2 = new Player;

    srand(time(NULL));
    int random_number_generator = rand() % 2 + 1;

    if (random_number_generator == 1) {
        went_first_player = player1;
        went_first_player->setFirst(true);
        
        went_second_player = player2;
        went_second_player->setFirst(false);
    }

    else {
        went_first_player = player2;
        went_first_player->setFirst(true);

        went_second_player = player1;
        went_second_player->setFirst(false);
    }


}

void Game::gameLoop() {

}

void Game::perform_stand_phase() {

}

void Game::perform_draw_phase() {

}

void Game::perform_ride_phase() {

}

void Game::perform_main_phase() {

}

void Game::perform_battle_phase() {

}

void Game::perform_end_phase() {

}

