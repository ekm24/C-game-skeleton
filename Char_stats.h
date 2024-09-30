#ifndef CHARSTATS_H_
#define CHARSTATS_H_

    #include <tsgl.h>     // Canvas, ColorInt, etc.
    #include <iostream>   // cout, cerr, ...
    #include <string>     // string
    #include <omp.h>      // OpenMP functions
    #include <cmath>
    #ifdef _WIN32
    #include <windows.h>
    #else
    #include <unistd.h>    // sleep()
    #endif

    using namespace tsgl;
    using namespace std;

 class Character {
        public:
            void attack(en_health, strength);
            void display_spell_list();
            string CharName;
            int strength;
            int health;
    };
    
#endif