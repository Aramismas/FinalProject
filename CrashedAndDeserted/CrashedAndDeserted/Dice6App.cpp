#include "Dice6App.hpp"


Dice6App :: Dice6App() : RollApp(){}

Dice6App :: Dice6App(int Beat, int BIAS){
	numberToBeat = Beat;
	bias = BIAS;

}

void Dice6App :: print(){

	cout << "Rolled a 6 sided dice with a bias of: "<< bias << endl << "Number to win is " << numberToBeat<< endl << "you got: " << currentNumber <<endl;	
}

void Dice6App :: SetRollFunction(){
	
	RollStrategy* function;
	cout << "after initialization of RollStrat: Bias = " << bias <<endl;
	if(bias == 0){
		function = new NormalRoll();
	}
	if(bias < 0){
		function = new DisAdvRoll();
	}
	else{
		function = new AdvRoll();
	}
	cout << "after the if tree: Bias = "<<bias<<endl;
	RollFunction = function;
}



void Dice6App :: roll(){
	if(!RollFunction){
		throw invalid_argument("NULL");
	}
	RollFunction->rolling(this);
}

int Dice6App :: getCurrentNumber(){
	return currentNumber;

}

int Dice6App :: getNumOfSides(){
	return sides;
}

void Dice6App :: setCurrentNumber(int RolledNumber){
	currentNumber = RolledNumber;
}

int Dice6App :: getNumberToBeat() {
	return numberToBeat;

}

int Dice6App :: getBias() {
	return bias;

}

void Dice6App :: setNumberToBeat(int BEAT) {
	numberToBeat = BEAT;

}

void Dice6App :: setBias(int BIAS) {
	bias = BIAS;

}
