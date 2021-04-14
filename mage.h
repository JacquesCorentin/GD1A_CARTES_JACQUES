#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
using namespace std;

class Mage{


    private:
        int _health = 50;
        int _attaque = 5;
        std::string _nom = "LeRoiMerlin";
        std::vector<Monstre> _invocMonstres();
        bool _restrictionAt = false;
        bool _mort = false;

    public:
        Monstre();
        std::string getNom();
        int getVie();
        std::vector<Monstre> getInvocMonstre();
        bool restrinctionAt();
        void afficheMage();
        int getHit (int attaqueEnnemis);
        bool mortEnnemis();
        void Mort();

        void finTour ();

};

#endif