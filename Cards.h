#include <vector>
#include <string>
#include "Types.h"
#include "Effects.h"

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
    types subTypes;
    types specialTypes;
    skillIcons skillIcon;
    Effect cardText;
    specialIcons specialIcon;
    int drive;
};
struct card_state {
    bool isHidden;
    bool isRest;
    bool isFaceDown;
    Player* owner;
    Player* master;
};
class Card {
    private:
        card_information base_information;
        card_information current_information;
        card_state previous_state;
        card_state temp_state;
        card_state current_state;

    public:

        
};