#ifndef __CLASS_EXILED_MEMBER
#define __CLASS_EXILED_MEMBER
#include <iostream>
#include "character.hpp"
using namespace std;

class ExiledMember {
	private:
		static ExiledMember* exiled_instance;
		double specialAttack;
		double health = 20;
		double damage = 4;
	//protected:
	//	ExiledMember();
	public:
//		ExiledMember();
		static ExiledMember* get_exiled_instance() {
			if (exiled_instance == nullptr) {
				exiled_instance = new ExiledMember();
			}
			return exiled_instance;
		}
		void boost_health();
		void loseHealth(double);
		double special_attack(Character*);	
		double getDamage();
		double getHealth();
};
#endif
