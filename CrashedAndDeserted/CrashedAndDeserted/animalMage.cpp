//
//  animalMage.cpp
//  CrashedAndDeserted
//
//  Created by Aramis Masarati on 11/24/20.
//  Copyright © 2020 Aramis Masarati. All rights reserved.
//

#include "animalMage.hpp"
#include <iostream>

double AnimalMage::attack() {
    std::cout << this->name << " used a basic attack and did " << this->basicAttack << " damage." << std::endl;
    return this->basicAttack;
}

double AnimalMage::specialAttack() {
    std::cout << this->name << " used a spell attack and did " << this->spells << " damage." << std::endl;
    return this->spells;
}

void AnimalMage::healthIncrease() {
    std::cout << this->name << " healed and gained 3.5 health." << std::endl;
    this->health += 3.5;
}

void AnimalMage::damaged(double damage) {
    std::cout << this->name << " was attacked and lost " << damage << " health." << std::endl;
    this->health -= damage;
}

void AnimalMage::stats() {
    std::cout << "STATS:" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Race: " << this->race << std::endl;
    std::cout << "Basic Attack: " << this->basicAttack << std::endl;
    std::cout << "Spell: " << this->spells << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "IQ: " << this->IQ << std::endl;
}
