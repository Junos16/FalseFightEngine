#include "Zone.h"
#include "Enums.h"

class Player {
    private:
        int grade;
        int maxGrade;
        int damage;
        int hand_size;
        int drop_count;
        int deck_count;
        int soul_count;
        int bind_count;

        int flipped_down_damage;
        int flipped_up_damage;
        int rearguard_circle_count;
        int extra_rearguard_circle_count;
        int imaginary_gift_count;
        
        int turnCount;
        bool wentFirst;
        bool isTurnPlayer;

        //activation condition keyword
        int limit_break;
        int generation_break;
        int ritual;
        int thunderstrike;
        bool oracle;
        bool brave;
        bool unite;
        bool darkness;
        bool dark_device;
        bool shinken_hissatsu;
        bool white_wings;
        bool black_wings;
        bool glitter;

        World world;

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

    public:
        Player();

        void setFirst(bool);
        bool checkFirst();

        void stand_up_vanguard();

        void normal_draw();
        void effect_draw();

        void normal_ride();
        void persona_ride();
        void normal_stride();

        void normal_call();
        void move_rearguard_in_column();
        void switch_card();
        void put();
        void place();
        void discard();
        void retire();
        
        void put_as_guage();
        void move_guage();

        void bind();
        void lock();
        void unlock();
        void delete_vanguard();
        
        void perform_drive_check();
        void perform_twin_drive();
        void perform_triple_drive();
        void perform_damage_check(); 

        void counter_blast();
        void counter_charge();
        void soul_blast();
        void soul_charge();
        void g_flip();
        void g_unflip();
        void g_persona_flip();

        void attack();
        void battle();
        void change_attack_target();
        void boost();
        void intercept();
        void guard();

        void deal_damage();
        void heal();
        
        void reveal();
        void declare();
        void search();
        void shuffle();
        
        void dominate();
        void flip_over();
        void become_the_stage();
        void final_rush();
        void change_world();
        void alchemagic();

        
};