//Game3 Functions

#include "header.h"
using namespace std;

extern int choiceint, NateHP, NateMAXhp, edmg1, edmg2, edmg3, edmg4, edmg5;

//Function for Game 3 Part 1
void game3_1()
{
	//Choice word is char string for input
	//char choiceword[100];

	/*//Creates new page effect
	pageBreak();
	//Chapter title and dialogue between Nate and Elena
	pageBreak();
	cout << "CHAPTER 3: Unlocking the Past\n";
	cout << "-----------------------------\n";
	cout << "\n\n\n\n";
	sleep(3);
	cout << "Nathan: The map says the treasure must be West.";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Are you sure Nate? This looks like it's leading nowhere...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Don't worry Elena.. Look  here's some ruins!";
	cout << "\n\n";
	sleep(2);
	cout << "(Both Elena and Drake look at a huge wall with spanish written on it)";
	lineBreak();
	cout << "\n";
	sleep(2);
	cout << "La mirada en la noche, En mi luz, Brillando en el tesoro, El mentiras Doradas\nbajo mi resplandor a oscuras.";
	enter2();
	lineBreak();
	cout << "Elena: Oh gosh it's in Spanish...";
	cout << "\n";
	sleep(2);
	cout << "       Check the black book and see what Drake said about it.";
	cout << "\n\n";
	sleep(2);
	lineBreak();

	cout << "Would you like to look at the black book?<y/n>:	";
	cin  >> choicechar;

	if(choicechar == 'y' || choicechar== 'Y')
	{
	lineBreak();
	cout << "Look into the night, Into my light, Shining on the treasure, El Dorado lies\nbeneath my glow in darkness.";
	enter();
	lineBreak();
	}
	else
	{
	cout << "\n\nElena: Alright Nate I don't know if that's a good idea...";
	cout << "\n";
	sleep(2);
	cout << "       If at any time you want to look at the black book for a hint type bb.";
	enter();
	lineBreak();
	}

	cout << "Nathan: I wonder what it could mean...";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Say the magic word and it'll open I bet...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Open sesame!!! PLEASE!!!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: .......";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: What???";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: I meant the word to solve the riddle...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: OHHHHHH! Alright let's do this then!!!";
	cout << "\n\n";
	sleep(2);

	do
	{
	lineBreak();

	cout << "What is the magic word?	";
	cin  >> choiceword;

	lineBreak();

	if(choiceword[0] == 'b' || choiceword[1] == 'b')
	{
	cout << "Elena: Here's what the black book says...";
	cout << "\n\n";
	sleep(2);
	cout << "Look into the night, Into my light, Shining on the treasure, El Dorado lies\nbeneath my glow in darkness.";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Any clue to what the word is now?";
	enter();
	lineBreak();
	}
	} while(choiceword[0] != 'm' || choiceword[1] != 'o' || choiceword[2] != 'o'|| choiceword[3] != 'n');

	cout << "You hear a big BOOM! Suddenly the doors to the ruins open up...";
	cout << "\n";
	sleep(2);
	cout << "Inside are skeletons of dead courpses from the past...";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Nice work Nate!";
	cout << "\n";
	sleep(2);
	cout << "       Ugh I hate dead bodies though...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Pshh get over it.. Let's get going!";
	cout << "\n\n";
	sleep(2);
	lineBreak();

	cout << "Nate and Elena continue into the depths of the ruins.";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: This looks a little creepy Nate...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Bock bock bock! bouck bouck! Chicken!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Shut up!";
	cout << "\n\n";
	sleep(2);
	cout << "Nate and Elena keep walking until they find a lever that is infront of them.";
	cout << "\n\n";
	sleep(2);
	cout << "Suddenly two walls close trapping you two inside a little square with only the\nlever!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Great what should we do?...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: How about pull the lever!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: We don't know what will happen though...";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Got any better ideas?";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Want to look in Drake's black book?";
	cout << "\n\n";
	sleep(2);

	lineBreak();

	cout << "Would you like to look at the black book?<y/n>:	";
	cin  >> choicechar;

	if(choicechar == 'y' || choicechar== 'Y')
	{
	lineBreak();
	cout << "The black book shows a picture of a man pulling a lever and a gun\nwith two other figures.";
	enter();
	lineBreak();
	}
	else
	{
	cout << "\n\nElena: Alright Nate I'd say let's pull the lever...";
	enter();
	lineBreak();
	}*/

	choiceint = 0;

	while (choiceint != 1 || choiceint != 2)
	{

		cout << "Would you like to do?\n";
		cout << "---------------------\n\n";
		cout << "1.) Pull the lever.\n";
		cout << "2.) Push the lever.\n\n";

		cout << "CHOICE:	";
		cin >> choiceint;

		switch (choiceint)
		{
			//case 1 pull
		case 1: pageBreak();
			pageBreak();
			game3_2();
			break;

			//case 2 push		
		case 2: pageBreak();
			pageBreak();
			game3_3();
			break;


		default: cout << "That is not a valid choice.\n\n";
		}

	}


}

//Function for Game 3 Part 2
void game3_2()
{

	lineBreak();
	cout << "Nate pulls the lever...";
	cout << "\n\n";
	sleep(2);
	cout << "Suddenly the ground shifts and you realize you're standing on a platform.";
	cout << "\n\n";
	sleep(2);
	cout << "The platform lowers into the ground and you find 3 pirates surrounding you!";
	cout << "\n\n";
	sleep(2);

	//Sets pirates damage and health
	pirate piratelvl2[3] =			//	initializing an array of structs
	{
		{ 300, 65 },		// 	first structure in array
	{ 250, 65 },
	{ 200, 65 }
	};

	//Sets Nate's damage		
	edmg1 = 20;
	edmg2 = 200;
	edmg3 = 40;
	edmg4 = 65;
	edmg5 = 40;


	//Battle function		
	battleFunction(piratelvl2[0].hp, piratelvl2[0].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

	lineBreak();

	cout << "NOW THE SECOND PIRATE!";

	lineBreak();

	//Battle function		
	battleFunction(piratelvl2[1].hp, piratelvl2[1].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

	lineBreak();

	cout << "FINALLY THE THIRD PIRATE!";

	//Battle function		
	battleFunction(piratelvl2[2].hp, piratelvl2[2].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

	lineBreak();

	cout << "\nCongrats! You have leveled up!";
	cout << "\n";

	sleep(2);
	cout << "Nate gains an extra 200 maxHP.";

	enter2();


	NateMAXhp += 200;
	NateHP = NateMAXhp;

	lineBreak();

	cout << "Nathan: Whew that was close!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Alright let's get a move on! Go push the lever!";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: Alright, alright!";
	cout << "\n\n";
	sleep(2);

	game3_3();
}

//Game 3 Part 3 Boss battle
void game3_3()
{
	lineBreak();
	cout << "Nate pushes the lever";
	cout << "\n\n";
	sleep(2);
	cout << "Suddenly the ground shifts and you realize you're standing on a platform.";
	cout << "\n\n";
	sleep(2);
	cout << "The platform rises to another level!";
	cout << "\n\n";
	sleep(2);
	cout << "IT'S NAVARRO!!!!!!";
	cout << "\n\n";
	sleep(2);

	lineBreak();

	boss();
	cout << "\n\n";
	sleep(2);

	lineBreak();

	//Sets Navarro's damage and health
	pirate piratelvl2[3] =			//	initializing an array of structs
	{
		{ 900, 100 },		// 	first structure in array
	};

	//Sets Nate's Health	
	NateHP = NateMAXhp;

	cout << "Navarro throws a can of oil at you!";
	cout << "\n\n\n";
	sleep(2);

	cout << "What do you do?:	\n";
	cout << "----------------\n";
	cout << "1.) Fire your gun at the canister\n";
	cout << "2.) Dodge it!\n\n";
	cout << "CHOICE:	";
	cin >> choiceint;

	if (choiceint == 1)
	{
		lineBreak();
		cout << "You fire your gun at the canister!";
		cout << "\n\n";
		sleep(2);
		cout << "It explodes in a ball of fire!";
		cout << "\n\n";
		sleep(2);
		cout << "Some of it catches you on fire!";
		cout << "\n\n";
		sleep(2);
		cout << "You lose 50HP.";
		NateHP -= 50;
		cout << "\n\n";
		sleep(2);
	}
	else
	{
		lineBreak();
		cout << "Nate runs to his left!";
		cout << "\n\n";
		sleep(2);
		cout << "Ducking behind a pillar you dodge the barrel luckily!";
		cout << "\n\n";
		sleep(2);
		cout << "From behing the pillar you shoot Navarro for 20HP.";
		piratelvl2[0].hp -= 20;
		cout << "\n\n";
		sleep(2);
	}

	lineBreak();
	cout << "Navarro tosses a grenade beside your pillar!";
	cout << "\n\n\n";
	sleep(2);

	cout << "What do you do?:	\n";
	cout << "----------------\n";
	cout << "1.) Throw it back\n";
	cout << "2.) Book it!!\n\n";
	cout << "CHOICE:	";
	cin >> choiceint;

	if (choiceint == 1)
	{
		lineBreak();
		cout << "You throw the grenade back at Navarro!";
		cout << "\n\n";
		sleep(2);
		cout << "In mid-air it explodes!";
		cout << "\n\n";
		sleep(2);
		cout << "Luckily you aren't hurt!";
		cout << "\n\n";
		sleep(2);
		cout << "The bad news is it didn't damage Navarro either.";
		cout << "\n\n";
		sleep(2);
	}
	else
	{
		lineBreak();
		cout << "Nate books it away from the grenade!";
		cout << "\n\n";
		sleep(2);
		cout << "Booking it behind a box Navarro fires a couple rounds at you!";
		cout << "\n\n";
		sleep(2);
		cout << "Luckily none of them hit you and you are safe!";
		cout << "\n\n";
		sleep(2);
	}

	lineBreak();
	cout << "Elena fires a few shots at Navarro distracting him!";
	cout << "\n\n\n";
	sleep(2);

	cout << "What do you do?:	\n";
	cout << "----------------\n";
	cout << "1.) Go and try to punch him\n";
	cout << "2.) Throw a grenade at Navarro!!\n\n";
	cout << "CHOICE:	";
	cin >> choiceint;

	if (choiceint == 2)
	{
		lineBreak();
		cout << "You throw a grenade at Navarro!";
		cout << "\n\n";
		sleep(2);
		cout << "Too bad he's too smart and throws it back!";
		cout << "\n\n";
		sleep(2);
		cout << "It's too late! It explodes right by you!";
		cout << "\n\n";
		sleep(2);
		cout << "You lose 75HP.";
		NateHP -= 75;
		cout << "\n\n";
		sleep(2);
	}
	else
	{
		lineBreak();
		cout << "Nate runs up to Navarro and punches him!";
		cout << "\n\n";
		sleep(2);
		cout << "That was one hard punch! Navarro get's up and runs behind another box";
		cout << "\n\n";
		sleep(2);
		cout << "Navarro looses 30HP.";
		piratelvl2[0].hp -= 30;
		cout << "\n\n";
		sleep(2);
	}


	lineBreak();
	cout << "You see that Navarro is right beside a oil canister!";
	cout << "\n\n\n";
	sleep(2);

	cout << "What do you do?:	\n";
	cout << "----------------\n";
	cout << "1.) Shoot the canister!\n";
	cout << "2.) Leave it and hide!!\n\n";
	cout << "CHOICE:	";
	cin >> choiceint;

	if (choiceint == 1)
	{
		lineBreak();
		cout << "You shoot the canister beside Navarro!";
		cout << "\n\n";
		sleep(2);
		cout << "The canister explodes!";
		cout << "\n\n";
		sleep(2);
		cout << "Navarro escapes the explosion!";
		cout << "\n\n";
		sleep(2);
		cout << "A ring of fire is triggered and it's now a battle!..";
		cout << "\n\n";
		sleep(2);
	}
	else
	{
		lineBreak();
		cout << "Nate hides behind a wall!";
		cout << "\n\n";
		sleep(2);
		cout << "Navarro: Come out Nate! It's time to fight!!!";
		cout << "\n\n";
		sleep(2);
		cout << "Nate: Let's do this!!!";
		cout << "\n\n";
		sleep(2);
	}

	lineBreak();

	cout << "FIGHT!!!!!!";
	cout << "\n\n";
	sleep(2);



	//Sets Nate's damage		
	edmg1 = 45;
	edmg2 = 300;
	edmg3 = 50;
	edmg4 = 75;
	edmg5 = 60;


	//Battle function		
	battleFunction(piratelvl2[0].hp, piratelvl2[0].dmg, edmg1, edmg2, edmg3, edmg4, edmg5);

	//LineBreak
	lineBreak();

	//output
	cout << "YOU HAVE DONE IT NAVARRO IS DEAD!!!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: You did it Nate!";
	cout << "\n\n";
	sleep(2);
	cout << "Nathan: What can I say? I'm the man!";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Shut up you goof!";
	cout << "\n\n";
	sleep(2);
	cout << "(Elena pulls Nate close to him and kisses him on the lips)";
	cout << "\n\n";
	sleep(2);
	cout << "Elena: Nice work Nate.";
	cout << "\n\n";
	sleep(2);
	cout << "Nate and Elena walk out of the ruins out to the water.";
	cout << "\n\n";
	sleep(2);
	cout << "Sully arrives with a boat and the three of you sail off into the distance of the\nsunset";
	cout << "\n\n";
	sleep(2);
	enter2();
	lineBreak();
	lineBreak();

	theEnd();
	enter2();

	lineBreak();
	pageBreak();

	cout << "Congrats! You have complete Uncharted: Drake's Fortune, a game by Brenden Yee";
	cout << "\n\n";
	sleep(2);
	cout << "For completing this game here are some codes for the next time through!";
	cout << "\n\n";
	sleep(2);
	cout << "200 = Increases Nate's health by 200";
	cout << "\n";
	sleep(2);
	cout << "8055 = Skips the whole game to the boss battle";
	cout << "\n";
	sleep(2);
	cout << "8888 = Increases Nate's health by 1000";

	cout << "\n\n";
	sleep(2);

	enter2();

	pageBreak();
	pageBreak();

	intro();
	//line break
	skullXbones();

	//Prologue
	prologue();

	//to press enter
	enter2();

	//Pagebreak
	pageBreak();

	//Loading...
	loading();

	//StartMenu
	startMenu();

}