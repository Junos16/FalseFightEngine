#include <vector>
#include <string>
#include "Enums.h"
#include "Effect.h"

class Player;
class Zone;

struct card_information {
    std::string name;
    clans clan;
    races race;
    int grade;
    int power;
    int shield;
    int critical;
    triggerIcons triggerIcon;
    types mainType;
    types subType;
    types specialType;
    skillIcons skillIcon;
    std::vector<Effect> cardText;
    specialIcons specialIcon;
    int drive;
};

struct card_state {
    bool isHidden;
    bool isRest;
    bool isFaceDown;
    Player* owner;
    Player* master;
    Zone* curren_location;
};

class Card {
    private:
        card_information base_information;
        card_information current_information;
        card_state previous_state;
        card_state temp_state;
        card_state current_state;

    public:
        void move_card(Zone* target_zone);
        void rest_card();
        void flip_card();
        void set_owner(Player* new_owner);
        void set_master(Player* new_master);
};