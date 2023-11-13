#include <string>
#include <vector>
#include <deque>
#include <stack>

class Card;
class Player;

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
        std::stack<Card*> cardStack;
};

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
        Card* originalDress;
        Card* marker;

        bool isLocked;
        bool isExtra;
        bool isStage;
        bool isAstralPlane;

        // logic for rc position

        Vector_Zone gauge_zone;

};

class Guardian_Circle: private Zone {
    private:
        std::vector<Card*> guardians;

};