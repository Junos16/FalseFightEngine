#include <string>
#include <vector>

class Effect {
    private:
        std::string effectType;
        //std::vector<Location> can_be_activated_from;

        std::vector<std::string> keywords;
        std::vector<Effect> subEffects;


};