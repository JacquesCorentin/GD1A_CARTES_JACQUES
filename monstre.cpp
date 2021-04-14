#ifndef MONSTRE_CPP
#define MONSTRE_CPP


#include "monstre.h"
#include <iostream>
#include <string>

using namespace std;


    Monstre::Monstre(){}


    ///////////////////////////////

    int Monstre::vieMonstre(){
        return _health;
    }

    int Monstre::atqMonstre(){
        return _attaque;
    }

    int Monstre::fatigue(){
        return _restriction;
    }

    /////////////////////////////////

    void Monstre::afficheMonstre(){
        std::cout << _nom << std::endl;
        std::cout << "PV :", _vie, "ATK :", _attaque, "MANA :", _coutMana <<std::endl;
        return;
    }

    void Monstre::getHit(int attaqueEnnemis, int PvEnnemis){
        PvEnnemis = PvEnnemis - _attaque;
        _health = _health - attaqueEnnemis;
        _restrinctionAt = true;
        return _health;
    }

    void Monstre::Mort(){
       if (_health == 0)
            _mort = true;
        return;
    }

#endif

