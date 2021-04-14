#ifndef MONSTRE_CPP
#define MONSTRE_CPP


#include <monstre.h>
using namespace std;
#include <iostream>
#include <string>


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

    void Monstre::afficheStat(){
        std::cout << _nom << std::endl;
        std::cout << "PV :", _vie, "ATK :", _attaque, "MANA :", _coutMana <<std::endl;
        return;
    }

    void Monstre::attaqueMonstre(int attaqueEnnemis){
        _health = _health - attaqueEnnemis;
        return _health;
    }
#endif

