//Game2 Functions

#include "header.h"
using namespace std;

extern int NateHP, NateMAXhp, edmg1, edmg2, edmg3, edmg4, edmg5;

void game2_1()
{
	//Chapter title and dialogue between Nate and Elena
	cout << "CHAPTER 2: Finding Elena\n";
	cout << "------------------------\n";
	cout << "\n\n\n\n";
	sleep(3);
	cout << "Nathan continues up the stairs and through another tunnel.";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Jesus, Elena, where are you?.";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan exits the tunnel. He looks up and sees a tower above him..";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: GREAT ELENA! What are you doing in there...";
	cout << "\n\n";
	sleep(2);
	cout << "(A pirate is in the way of getting to Elena in the top of the tower)";
	cout << "\n\n";
	sleep(2);
	cout << "Natan: Well... I guess I have to go through him...";
	cout << "\n\n\n";
	sleep(2);

	//Sets pirates damage and health
	pirate piratelvl2[2] =			//	initializing an array of structs
	{
		{ 250, 65 },		// 	first structure in array
	};

	//Sets Nate's damage		
	edmg1 = 15;
	edmg2 = 150;
	edmg3 = 30;
	edmg4 = 55;
	edmg5 = 35;


	//Battle function		
	battleFunction(piratelvl2[0].hp, piratelvl2[0].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

	lineBreak();

	cout << "\nCongrats! You have leveled up!";
	cout << "\n";

	sleep(2);
	cout << "Nate gains an extra 150 maxHP.";

	enter2();

	NateMAXhp = 800;
	NateHP = NateMAXhp;


	lineBreak();

	cout << "Nathan(Talking to Self): Nice work Nate!";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan(talking to Elena): How was the sleep in this dump?...";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: HAHA funny...";
	cout << "\n";
	sleep(2);
	cout << "       Just get me outta here!...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Haha alrighty then.";
	cout << "\n\n";
	sleep(2);
	cout << "       (Picks lock to tower door)";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Ahh that's better!";
	cout << "\n";
	sleep(2);
	cout << "       Oh Nate I picked this up before I jumped out of the plane.";
	cout << "\n";
	sleep(2);
	cout << "       I think it might be useful.";
	cout << "\n\n";
	sleep(2);

	lineBreak();

	cout << "NEW ITEM ACQUIRED! Nathan Drake's Black Book. Used for hints during hard puzzlesand situations.";
	cout << "\n\n";
	enter2();

	lineBreak();

	cout << "Nathan: Nice! Alright let's get going!";
	cout << "\n\n";
	sleep(2);

	cout << "Nate and Elena walk into the deep of the Jungle towards ruins..";
	cout << "\n";
	sleep(2);

	enter2();

	//Game 3 part 1
	game3_1();


}