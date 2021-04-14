#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include <string>
using namespace std;

class Monstre{


    private:
        int _health = 10;
        int _coutMana = 3;
        int _def = 4;
        int _attaque = 5;
        std::string _nom = "Goblin";
        bool _restrictionAt = false;
        bool _mort = false;

    public:
        Monstre();
        bool restrinctionAt();
        void afficheMonstre();
        int getHit (int attaqueEnnemis);
        bool mortEnnemis();
        void Mort();

        void finTour ();

};

#endif