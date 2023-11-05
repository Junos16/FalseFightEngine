#include "Zone.h"

class Player {
    private:
        int grade;
        int maxGrade;
        int turnCount;
        bool wentFirst;
        bool isTurnPlayer;

        Deque_Zone deck;
        Vector_Zone hand;
        Vector_Zone drop;

        Field field;

        Vector_Zone soul;
        Vector_Zone damage_zone;
        Vector_Zone bind_zone;
        Deque_Zone trigger_zone; 
        Vector_Zone g_zone;
        Vector_Zone order_zone;
        Card* ride_deck[4];
};