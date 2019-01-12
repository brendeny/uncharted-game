//Game1 Functions

#include "header.h"
using namespace std;

extern int NateHP, NateMAXhp, edmg1, edmg2, edmg3, edmg4, edmg5;
extern char choicechar;

//Function game1 is start of game
void game1()
{
	cout << "Welcome to Uncharted Nate's Fortune. You are everyday treasure hunter Nathan Nate."
		"Looking for El Dorado... the Lost City of Gold.";

	cout << "\n\nAre you prepared to start an adventure of a lifetime?<y/n>\n";

	game1if();

}

//Function game1if is made so that if the user inputs an improper
//choice it will give the user the chance to input the right choice after.
void game1if()
{
	cout << "\nCHOICE:	";
	cin >> choicechar;

	if (choicechar == 'y' || choicechar == 'Y')
	{
		cout << "\nGreat! Let's get started then =)";
		cout << "\n";
		enter();
		pageBreak();
		loading();
		pageBreak();
		game1_1();
	}
	else if (choicechar == 'n' || choicechar == 'N')
	{
		cout << "\n\nI guess you're not ready for this adventure!";
		cout << "\n";
		sleep(1);
		cout << "Bye-bye!";
		cout << "\n";
		sleep(2);
		pageBreak();
		sleep(2);
		intro();
		//line break
		skullXbones();

		//Prologue
		prologue();

		//to press enter
		enter();

		//Pagebreak
		pageBreak();

		//Loading...
		loading();

		//StartMenu
		startMenu();
	}
	else
	{
		cout << "\nThat is not a proper choice.";
		game1if();
	}
}

//First chapter
void game1_1()
{

	//Chapter title and dialogue between Nate and Elena
	cout << "CHAPTER 1: Plane-Wrecked\n";
	cout << "------------------------\n";
	cout << "\n\n\n\n";
	sleep(3);
	cout << "Elena (talking into camera): We're on the trail of the lost treasure of";
	cout << "\n";
	sleep(2);
	cout << "       El Dorado and it's brought us here to this tiny island in the ";
	cout << "\n";
	sleep(2);
	cout << "       middle of the Pacific Ocean.";
	cout << "\n\n";
	sleep(2);
	cout << "Nate:  Let's get a closer look!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena:  Where will this journey take us. Does El Dorado really exist? Was";
	cout << "\n";
	sleep(2);
	cout << "        Sir Francis Drake right, or are their deeper secrets on this mysterious";
	cout << "\n";
	sleep(2);
	cout << "        island that awaits us.";
	cout << "\n";
	sleep(2);
	cout << "        Stay tuned for the next episode of Uncharted.";
	cout << "\n\n";
	sleep(2);
	cout << "      (Elena turns to Nate)";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: That should keep them from changing the channel...";
	cout << "\n\n\n";
	sleep(4);
	cout << "*****BOOOOM!@!@!@*****";
	cout << "\n\n\n";
	sleep(2);
	cout << "Elena: What the hell was that!!!";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Anti-Aircraft fire?!?!?";
	cout << "\n";
	sleep(2);
	cout << "       This is SO NOT COOL!!!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Are there even parachutes on this plane?!?";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Now would be a good time to check!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena(Grabs the parachute): How do you use this thing?!?";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Easy just Jump! and pull the cord!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: See you on the ground?";
	cout << "\n\n";
	sleep(2);
	cout << "       (Elena Jumps off plane)";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Ahh! What am I doing?!?";
	cout << "\n\n\n\n\n";
	sleep(2);

	//Choices for first decision for user to make
	cout << "What would you like to do?\n";
	cout << "--------------------------\n\n";
	cout << "a. Continue to try and get the plane under control\n";
	cout << "b. Grab a parachute and jump for it!\n";
	cout << "c. Try to crash the plane into the water for a soft landing.\n\n";

	cout << "CHOICE:	";
	cin >> choicechar;


	//Switch for choices
	switch (choicechar)
	{
		//case a Nate dies
	case 'a': cout << "\n\n\n\n\nNate tries to steer the plane to safety but the plane is too hard to control";
		cout << "\n";
		sleep(1);
		cout << "and you fail to control it...";
		cout << "\n";
		sleep(2);
		cout << "The plane crashes into the jungle and you die...";
		cout << "\n";
		enter();
		pageBreak();
		gameOver();
		cout << "\n\nWould you like to continue? <y/n>:	";
		cin >> choicechar;

		if (choicechar == 'y' || choicechar == 'Y')
		{
			cout << "\nGreat! Let's get started then =)";
			cout << "\n";
			enter();
			pageBreak();
			loading();
			pageBreak();
			game1_1();
		}
		else if (choicechar == 'n' || choicechar == 'N')
		{
			cout << "\n\nI guess you're not ready for this adventure!";
			cout << "\n";
			sleep(1);
			cout << "Bye-bye!";
			cout << "\n";
			sleep(2);
			pageBreak();
			sleep(2);
			intro();
			//line break
			skullXbones();

			//Prologue
			prologue();

			//to press enter
			enter();

			//Pagebreak
			pageBreak();

			//Loading...
			loading();

			//StartMenu
			startMenu();
		}
		else
		{
			cout << "\nThat is not a proper choice you have been terminated.";
			terminates();
		}

		break;

		//case b Nate lives	
	case 'b': 	cout << "\n\n\n\n\nNate runs for it grabbing the parachute but you remember you";
		cout << "\n";
		sleep(1);
		cout << "forgot your map and go back to the front of the plane tripping...You get up";
		cout << "\n";
		sleep(2);
		cout << "booking it out the back exit of the plane you jump making it out just";
		cout << "\n";
		sleep(1);
		cout << "in time....";
		enter();
		lineBreak();
		game1_2();
		break;

		//case c Nate dies
	case 'c':		cout << "\n\n\n\n\nNate tries to land the plane in the water but you are";
		cout << "\n";
		sleep(1);
		cout << "travelling too fast... The plane crashes into the water bursting";
		cout << "\n";
		sleep(2);
		cout << "into flames and you die...";
		cout << "\n";
		enter();
		pageBreak();
		gameOver();
		cout << "\n\nWould you like to continue? <y/n>:	";
		cin >> choicechar;

		if (choicechar == 'y' || choicechar == 'Y')
		{
			cout << "\nGreat! Let's get started then =)";
			cout << "\n";
			enter();
			pageBreak();
			loading();
			pageBreak();
			game1_1();
		}
		else if (choicechar == 'n' || choicechar == 'N')
		{
			cout << "\n\nI guess you're not ready for this adventure!";
			cout << "\n";
			sleep(1);
			cout << "Bye-bye!";
			cout << "\n";
			sleep(2);
			pageBreak();
			sleep(2);
			intro();
			//line break
			skullXbones();

			//Prologue
			prologue();

			//to press enter
			enter();

			//Pagebreak
			pageBreak();

			//Loading...
			loading();

			//StartMenu
			startMenu();

		}
		else
		{
			cout << "\nThat is not a proper choice you have been terminated.";
			terminates();
		}

		break;


	default: cout << "That is not a valid choice.";
	}


}

//Part 2 of first chapter
void game1_2()
{
	cout << "Nate: Crap how do I use this thing...GAHHH!!!!!!";
	cout << "\n";
	sleep(2);
	cout << "       (Nate pulls the cord to eject the parachute)";
	cout << "\n";
	sleep(2);
	cout << "       I gotta fingure out where I want to land and pull one of the cords to";
	cout << "\n";
	sleep(2);
	cout << "       steer...";
	cout << "\n";
	sleep(2);

	lineBreak();

	//Choices for first decision for user to make
	cout << "What would you like to do?\n";
	cout << "--------------------------\n\n";
	cout << "a. Pull the right cord and go and try and land on a flat cliff\n";
	cout << "b. Pull the left cord and try and land in the water\n";
	cout << "c. Pull both cords taking you for a landing in the trees of the jungle.\n\n";

	cout << "CHOICE:	";
	cin >> choicechar;

	switch (choicechar)
	{
		//case a Nate dies
	case 'a': cout << "\n\n\n\n\nNate tries to land safely on the flat surface of the cliff pulling the right";
		cout << "\n";
		sleep(1);
		cout << "cord but...you are decending at too fast a pace...There isn't enough wind to";
		cout << "\n";
		sleep(2);
		cout << "make un updraft...You crash into the rocky side of the cliff and die...";
		cout << "\n";
		enter();
		pageBreak();
		gameOver();
		cout << "\n\nWould you like to continue? <y/n>:	";
		cin >> choicechar;

		if (choicechar == 'y' || choicechar == 'Y')
		{
			cout << "\nGreat! Let's get started then =)";
			cout << "\n";
			enter();
			pageBreak();
			loading();
			pageBreak();
			game1_2();
		}
		else if (choicechar == 'n' || choicechar == 'N')
		{
			cout << "\n\nI guess you're not ready for this adventure!";
			cout << "\n";
			sleep(1);
			cout << "Bye-bye!";
			cout << "\n";
			sleep(2);
			pageBreak();
			sleep(2);
			intro();
			//line break
			skullXbones();

			//Prologue
			prologue();

			//to press enter
			enter();

			//Pagebreak
			pageBreak();

			//Loading...
			loading();

			//StartMenu
			startMenu();

		}
		else
		{
			cout << "\nThat is not a proper choice you have been terminated.";
			terminates();
		}

		break;

		//case c Nate lives	
	case 'c': 	cout << "\n\n\n\n\nNate pulls both cords heading for the jungle. You are decending at a high speed";
		cout << "\n";
		sleep(1);
		cout << "It's too high of a speed! Suddenly you are in a bush of green and then...";
		cout << "\n";
		sleep(2);
		cout << "Darkness........";
		enter();
		lineBreak();
		game1_3();
		break;

		//case b Nate dies
	case 'b':		cout << "\n\n\n\n\nNate tries to make a soft landing into the water pulling the left cord but";
		cout << "\n";
		sleep(1);
		cout << "suddenly an updraft of wind hits you sending you into an uncontrallable";
		cout << "\n";
		sleep(2);
		cout << "spiral!!! Unfortunately you cannot control it and the spiral ends up";
		cout << "\n";
		sleep(2);
		cout << "taking you into a rock which you hit your head on and die...";

		enter();
		pageBreak();
		gameOver();
		cout << "\n\nWould you like to continue? <y/n>:	";
		cin >> choicechar;

		if (choicechar == 'y' || choicechar == 'Y')
		{
			cout << "\nGreat! Let's get started then =)";
			cout << "\n";
			enter();
			pageBreak();
			loading();
			pageBreak();
			game1_2();
		}
		else if (choicechar == 'n' || choicechar == 'N')
		{
			cout << "\n\nI guess you're not ready for this adventure!";
			cout << "\n";
			sleep(1);
			cout << "Bye-bye!";
			cout << "\n";
			sleep(2);
			pageBreak();
			sleep(2);
			intro();
			//line break
			skullXbones();

			//Prologue
			prologue();

			//to press enter
			enter();

			//Pagebreak
			pageBreak();

			//Loading...
			loading();

			//StartMenu
			startMenu();

		}
		else
		{
			cout << "\nThat is not a proper choice you have been terminated.";
			terminates();
		}

		break;


	default: cout << "That is not a valid choice.";
	}
}

void game1_3()
{
	lineBreak();
	cout << "      (Nate's parachute is trapped to a statue)";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Mmmmmm..rmmmm..Whoa...Where am I?";
	cout << "\n\n";
	sleep(3);
	cout << "       (Nate unstraps his parachute dropping to the ground)";
	cout << "\n\n";
	sleep(2);
	cout << "Nate: Strangers trying to kill me; leave my book on a burning plane; Elena's";
	cout << "      missing, most likely dead. That's great. Great start, Nate.";

	lineBreak();

	cout << "Continue your journey out into the jungle?<y/n>:	";
	cin >> choicechar;

	if (choicechar == 'y' || choicechar == 'Y')
	{
		lineBreak();
		cout << "\nNate continues into the forest.";
		cout << "\n";
		sleep(2);
		cout << "Nate come to a clearing where you see 2 pirates.";
		cout << "\n";
		sleep(2);
		lineBreak();

		pirate piratelvl1[2] =			//	initializing an array of structs
		{
			{ 100, 50 },		// 	first structure in array
		{ 100, 50 }		//	next structure in array
		};

		edmg1 = 0;
		edmg2 = 0;
		edmg3 = 0;
		edmg4 = 0;
		edmg5 = 0;




		battleFunction(piratelvl1[0].hp, piratelvl1[0].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

		cout << "\n\nNOW THE 2ND PIRATE!\n";
		enter2();

		battleFunction(piratelvl1[1].hp, piratelvl1[1].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

		lineBreak();

		cout << "\nCongrats! You have leveled up!";
		cout << "\n";

		sleep(2);
		cout << "Nate gains an extra 150 maxHP.";

		enter2();


		NateMAXhp += 150;
		NateHP = NateMAXhp;

		lineBreak();
		cout << "Nate continues to walk through a tunnel leading off into the distance.";
		enter2();
		pageBreak();
		loading();
		pageBreak();

		//Game 2 part 1
		game2_1();



	}
	else if (choicechar == 'n' || choicechar == 'N')
	{
		cout << "\n\nI guess you're not ready for this adventure!";
		cout << "\n";
		sleep(1);
		cout << "Bye-bye!";
		cout << "\n";
		sleep(2);
		pageBreak();
		sleep(2);
		intro();
		//line break
		skullXbones();

		//Prologue
		prologue();

		//to press enter
		enter();

		//Pagebreak
		pageBreak();

		//Loading...
		loading();

		//StartMenu
		startMenu();

	}
	else
	{
		cout << "\nThat is not a proper choice you have been terminated.";
		terminates();
	}



}
