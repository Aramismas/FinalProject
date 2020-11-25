//
//  mage.hpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#ifndef mage_h
#define mage_h

#include <string>

class Mage {
    private:
        std::string name;
        std::string race;
        bool healthItem;
        double IQ;
        double basicAttack;
        double health;
        double spells;
    public:
        Mage(std::string name, std::string race) : name(name), race(race) {}
        virtual int attack() = 0;
        virtual int specialAttack() = 0;
        virtual void healthIncrease() = 0;
        virtual void damaged(double damage) = 0;
        virtual bool runAway(double chance, double opHealth) = 0;
        virtual std::string getName() {return this->name;}
        virtual void setHealthItem(bool val) {this->healthItem = val;}
        virtual bool getHealthItem() {return healthItem;}
        virtual void increaseIQ(double IQ) {this->IQ += IQ;}
        virtual void increaseBasicAttack(double basicAttack) {this->basicAttack += basicAttack;}
        virtual void increaseHealth(double health) {this->health += health;}
        virtual void increaseSpells(double spells) {this->spells += spells;}
        virtual void stats() = 0;
};

#endif /* mage_h */