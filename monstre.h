#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include <string>
using namespace std;

class Monstre{


    private:
        int health = 10;
        int coutMana = 3;
        int def = 4;
        int attaque = 5;
        string name ('Goblin');
        int restrictionAt = 1 ;

    public:
        Monstre();
        void afficheStat();
        int getHit (int Attaque);
        void Mort();

        void finTour ();

};

#endif