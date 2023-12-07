#include "Player.h"
#include "Card.h"
class Game {
    private:
        Player* turn_player;
        Player* non_turn_player;
        Player* went_first_player;
        Player* went_second_player;
        
    public:
        Game();
        void gameLoop();
        void perform_stand_phase();
        void perform_draw_phase();
        void perform_ride_phase();
        void perform_main_phase();
        void perform_battle_phase();
        void perform_end_phase();   
};