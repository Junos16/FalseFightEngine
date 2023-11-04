#include <string>
#include <vector>
#include <deque>
#include <stack>
#include "Card.h"

class Zone {
    private:
        bool isHidden;

    public:

};

class Deque_Zone: private Zone {
    private:
        std::deque<Card*> cardDeque;
};

class Vector_Zone: private Zone {
    private:
        std::vector<Card*> cardVector;
};

class Stack_Zone: private Zone {
    private:
        std::Stack<Card*> 
}

struct Field {
    Vanguard_Circle vanguard_circle;
    std::vector<Rearguard_Circle> rearguards;
    Guardian_Circle guardian_circle;
    

};

class Vanguard_Circle: private Zone {
    private:
        Card* main_vanguard;
        Card* heart;
        Card* legion_mate;
        Card* marker;
        bool isDeleted;
};

class Rearguard_Circle: private Zone {
    private:
        Card* rearguard;
        Card* overdress;
        Card* marker;

        bool isLocked;
        bool isFrontRow;
        bool isLeft;
        bool isExtra;

        Vector_Zone gauge_zone;

};

class Guardian_Circle: private Zone {
    private:
        std::vector<Card*> guardians;

};