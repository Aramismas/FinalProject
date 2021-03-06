#include "Goblin.hpp"


Goblin* Goblin::goblin_instance = nullptr;


void Goblin::attack_power_indicator(Character* player) {
	cout << "The Goblin did " << this->attack_power << " amount of damage" << endl;
	player->damaged(this->attack_power);
}

void Goblin::deflect_damage(double player_attack, Character* player) { 
	cout << "Your attack of " << player_attack << " on the Goblin was deflected." << endl;
	cout << "Your health remains the same: " << player->getHealth() << endl;
	cout << "Goblin's health remains the same: " << this->health <<  endl;
}
/*
void Goblin::health_increase() {
	//the Troll has the ability to boost its health if the player was unable to repeal an attack
	 double health_increase_factor = this->health + 2;
	this->health = health_increase_factor;
	cout << "Troll's health was boosted by 2" << endl;
	cout << "The Troll's health is now: " << this->health << endl;
}*/
void Goblin::loseHealth(double playerAttack) {
	cout << "The Goblin has lost " << playerAttack << " health." << endl;
	this->health = this->health - playerAttack;
	cout << "The Goblin has " << this->health << endl;
}
double Goblin::getHealth() {
	return this->health;
}
double Goblin::getSpecialAttack() {
	return this->attack_power;	
}
