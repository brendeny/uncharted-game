//main.cpp

//Choice variable for menu
int choiceint;

//For random number
int randomnumber;

//Nate's HP
int NateHP;

//Opponent Pirate
int oppoPirate;

//Pirate's damage
int pirateDmg;

//Pirate's damage 2 for the random number
int pirateDmg2;

//NateMAXhp is Nate's max hp
int NateMAXhp;

//Extra Damage for Nate
int edmg1, edmg2, edmg3, edmg4, edmg5;

//char variable for choice
char choicechar;

#include "header.h"
using namespace std;

int main()
{
	//Nate's HP
	NateHP = 500;

	//Nate's total HP
	NateMAXhp = 500;

	//randomizer
	srand(static_cast<unsigned int>(time(0))); 	// in order for random number generator to work

						//Intro Function
	intro();

	//to press enter
	enter1();

	//line break
	skullXbones();

	//Prologue
	prologue();

	//to press enter
	enter1();

	//Pagebreak
	pageBreak();

	//Loading...
	loading();


	//Pagebreak
	pageBreak();

	//StartMenu
	startMenu();














	return 0;
}