#include <string>
#include <vector>
#include "Enums.h"

class Effect {
    private:
        EffectTypes effectType;
        //std::vector<Location> can_be_activated_from;
        bool cannot_be_used;
        Restriction restriction;
        Keywords keywords;
        std::vector<Effect> subEffects;

    public:
        void lose_cost();
        void increase_cost();
        void decrease_cost();
        void lose_effect();
};