//
//  animalWarrior.cpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#include "animalWarrior.hpp"
#include <iostream>

int AnimalWarrior::attack() {
    std::cout << this->name << " used a basic attack and did " << this->basicAttack << " damage." << std::endl;
    return this->basicAttack;
}

int AnimalWarrior::specialAttack() {
    std::cout << this->name << " used a smite attack and did " << this->smite << " damage." << std::endl;
    return this->smite;
}

void AnimalWarrior::healthIncrease() {
    std::cout << this->name << " healed and gained 2.5 health." << std::endl;
    this->health += 2.5;
}

void AnimalWarrior::damaged(double damage) {
    std::cout << this->name << " was attacked and lost " << damage << " health." << std::endl;
    this->health -= damage;
}

bool AnimalWarrior::runAway(double chance, double opHealth) {
    double run = chance * IQ;
    if (run > opHealth) {
        std::cout << this->name << " has successfully escaped the battle." << std::endl;
        return true;
    } else {
        std::cout << this->name << " could not escape the battle." << std::endl;
        return false;
    }
}

void AnimalWarrior::stats() {
    std::cout << "STATS:" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Race: " << this->race << std::endl;
    std::cout << "Basic Attack: " << this->basicAttack << std::endl;
    std::cout << "Smite: " << this->smite << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "IQ: " << this->IQ << std::endl;
}