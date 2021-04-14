#ifndef MAGE_CPP
#define MAGE_CPP


#include "monstre.h"
#include <iostream>
#include <string>

using namespace std;


    MAGE::MAGE(){}


    ///////////////////////////////

    int Monstre::vieMage(){
        return _health;
    }

    int Monstre::atqMage(){
        return _attaque;
    }

    int Monstre::fatigue(){
        return _restriction;
    }

    vector<monstre> Mage::getInvocMonstre(){
        return _invocMonstres;
    }
    /////////////////////////////////

    void Monstre::afficheMage(){
        std::cout << _nom << std::endl;
        std::cout << "PV :", _vie, "ATK :", _attaque <<std::endl;
        return;
    }

    void Monstre::attaqueMage(int attaqueEnnemis){
        _health = _health - attaqueEnnemis;
        return _health;
    }



#endif

