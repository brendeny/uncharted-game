//functions.cpp

#include "header.h"
using namespace std;
extern int choiceint, randomnumber, NateHP, oppoPirate, pirateDmg, pirateDmg2, NateMAXhp;
extern char choicechar;
void intro()

{
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   Welcome to a Game Created By, Brenden Yee.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   ------------------------------------------\n\n";

	cout << "\t           _  _ _  _ ____ _  _ ____ ____ ___ ____ ___ \n";
	cout << "\t           |  | |\\ | |    |__| |__| |__/  |  |___ |  \\ \n";
	cout << "\t           |__| | \\| |___ |  | |  | |  \\  |  |___ |__/ \n";
	cout << "                >>*******************************************<<";
	cout << "\n";
	cout << "       ___  ____ ____ _  _ ____ ____    ____ ____ ____ ___ _  _ _  _ ____ \n";
	cout << "       |  \\ |__/ |__| |_/  |___ [__     |___ |  | |__/  |  |  | |\\ | |___ \n";
	cout << "       |__/ |  \\ |  | | \\_ |___ ___]    |    |__| |  \\  |  |__| | \\| |___ \n";
	cout << "     >>******************************************************************<<\n";

}

void enter()
{
	cout << "\n\nPRESS ENTER TO CONTINUE:";
	cin.get();
	cin.get();
}

void enter1()
{
	cin.get();
}

void enter2()
{
	cout << "\n\nPRESS ENTER TO CONTINUE:";
	cin.get();
}

void prologue()

{
	cout << "\t      The story of an everyday man, Nathan Drake, and his\n"
		"\t  attempts to follow the footsteps of 16th century explorer\n"
		"\t\tSir Francis Drake (No relation...or is there?).\n";
	/*cout <<"Nate ";
	cout <<	"a treasure hunter. A man who is said to be a descendant of the great treasure hunter"
	"Sir Francis Drake. You are looking for the City of Gold. El Dorado. A long your journey"
	" you will encounter many problems and ; */
	/*sleep(prologueSleep);
	cout << ".";
	sleep(prologueSleep);
	cout << ".";
	sleep(prologueSleep);
	cout << ".";*/


}

void sleep(int delay)
{
	Sleep((delay * 1000));
}

void pause()

{

	sleep(paused);
}

//Void skull function
void skullXbones()
{
	cout << "\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t         	    ______ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t                 .-'      '-. \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t                /            \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t    _          |              |          _ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   ( \\         |,  .-.  .-.  ,|         / )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t    > '=._     | )(__/  \\__)( |     _.=' <\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   (_/'=._'=._ |/     /\\     \\| _.='_.='\\_)\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t          '=._ (_     ^^     _)'_.=' \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t              '=\\__|IIIIII|__/='\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t             _.='| \\IIIIII/ |'=._\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   _     _.='_.='\\          /'=._'=._     _\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t  ( \\_.='_.='     `--------`     '=._'=._/ )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   > _.='                            '=._ <\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t  (_/                                    \\_)\n";

	cout << "\n\n\n\n";
	sleep(1);
}

//Void lineBreak function
void lineBreak()
{
	cout << "\n\n\n\n\n\n\n\n";
}

//Void pageBreak function
void pageBreak()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

//Void startMenu function
void startMenu()
{
	pageBreak();
	cout << "\t\t\t++++++++++++++++++++++++++\n";
	cout << "\t\t\t||	Start Menu	||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t||   1) Start Game      ||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t||   2) Instructions    ||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t||   3) Cheat Section   ||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t||   4) Quit Game       ||\n";
	cout << "\t\t\t||			||\n";
	cout << "\t\t\t++++++++++++++++++++++++++\n";
	cout << "\n\n\t\t\tEnter a choice:\t";
	cin >> choiceint;

	//Case for menu
	switch (choiceint)
	{
		//case 1 starts game
	case 1: pageBreak();
		game1();
		break;

		//case 2 is instruction screen		
	case 2: pageBreak();
		instruction();
		break;

		//case 3 is cheat screen		
	case 3:	pageBreak();
		pageBreak();
		cheat();
		break;

		//case 4 is quit game		
	case 4: pageBreak();
		terminates();
		break;

	default: cout << "That is not a valid choice.";
	}


}

//Instructions for game
void instruction()
{
	cout << "\tWelcome to Uncharted: Drake's Fortune, A game by Brenden Yee.";
	cout << "\n";
	sleep(2);
	cout << "You are everyday treasure hunter Nathan Drake looking for El Dorado...";
	cout << "\n";
	sleep(2);
	cout << "the lost city of gold...With the help of your partner Elena and buddy ";
	cout << "\n";
	sleep(2);
	cout << "Sully, you will encounter pirates and puzzles a long your journey";
	cout << ".";

	enter();

	startMenu();
}

void loading()
{
	cout << "LOADING...\n\n";
	cout << "D";
	cout << "\n";
	pause();
	cout << "R";
	cout << "\n";
	pause();
	cout << "A";
	cout << "\n";
	pause();
	cout << "K";
	cout << "\n";
	pause();
	cout << "E";
	cout << "\n";
	pause();


}

//Hint Screen 1
void hintscr1()
{

}

//Game over screen
void gameOver()
{
	cout << "  _____          __  __ ______    ______      ________ _____  \n";
	cout << " / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n";
	cout << "| |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n";
	cout << "| | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n";
	cout << "| |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n";
	cout << " \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\\n";

}

//Output just to say how to terminate a game when you choose to quit.
void terminates()
{
	cout << "\n\nPRESS ENTER TO END THE GAME:\n\n";
	abort();
}


//Attack Menu
void attackMenu()
{
	cout << "+++++++++++++++++++++++++++++++++++++\n";
	cout << "||	     Attack Menu           ||\n";
	cout << "||  Where would you like to aim?   ||\n";
	cout << "||	     % = Chance            ||\n";
	cout << "||			           ||\n";
	cout << "||        1) Body  75%             ||\n";
	cout << "||			           ||\n";
	cout << "||        2) Head  5%              ||\n";
	cout << "||			           ||\n";
	cout << "||        3) Chest 40%             ||\n";
	cout << "||		                   ||\n";
	cout << "||        4) Croch 10%             ||\n";
	cout << "||			           ||\n";
	cout << "||        5) Punch 60%             ||\n";
	cout << "||			           ||\n";
	cout << "+++++++++++++++++++++++++++++++++++++\n";
	cout << "\n\nEnter a choice:\t";
	cin >> choicechar;
}

//THE GAME'S BATTLE FUNCTION!!!!!!
int battleFunction(int n, int d, int e1, int e2, int e3, int e4, int e5)
{


	oppoPirate = n;
	pirateDmg = d;

	while (NateHP > 0 && oppoPirate > 0)
	{
		attackMenu();
		switch (choicechar)
		{
		case '1': lineBreak();
			randomnumber = rand() % 4 + 1;


			if (randomnumber == 1 || randomnumber == 2 || randomnumber == 3)
			{
				cout << "BANG! you shot the enemy for " << 10 + e1 << " damage!";
				enter();
				oppoPirate -= 10 + e1;

				if (oppoPirate <= 0)
				{
					oppoPirate = 0;
					cout << "\nYou have killed him!";
					enter2();
					break;
				}
			}
			else
			{
				cout << "You missed your shot! The enemy takes 0 damage.";
				enter();
			}


			cout << "\n";
			break;


		case '2': lineBreak();
			randomnumber = rand() % 20 + 1;


			if (randomnumber == 2)
			{
				cout << "BOOM!!! HEADSHOT!!!";
				enter();
				oppoPirate -= 100 + e2;

				if (oppoPirate <= 0)
				{
					oppoPirate = 0;
					cout << "\nYou have killed him!";
					enter2();
					break;
				}
			}
			else
			{
				cout << "You missed your shot! The enemy takes 0 damage.";
				enter();
			}


			cout << "\n";
			break;


		case '3': lineBreak();
			randomnumber = rand() % 5 + 1;


			if (randomnumber == 2 || randomnumber == 3)
			{
				cout << "BAM! Nice shot! You hit the pirate for " << 25 + e3 << " damage";
				enter();
				oppoPirate -= 25 + e3;

				if (oppoPirate <= 0)
				{
					oppoPirate = 0;
					cout << "\nYou have killed him!";
					enter2();
					break;
				}
			}
			else
			{
				cout << "You missed your shot! The enemy takes 0 damage.";
				enter();
			}


			cout << "\n";
			break;


		case '4': lineBreak();
			randomnumber = rand() % 10 + 1;


			if (randomnumber == 1)
			{
				cout << "KABAM!!! Nailed him in the nuts!!!! Enemy takes " << 70 + e4 << " damage";
				enter();
				oppoPirate -= 70 + e4;

				if (oppoPirate <= 0)
				{
					oppoPirate = 0;
					cout << "\nYou have killed him!";
					enter2();
					break;
				}
			}
			else
			{
				cout << "You missed your shot! The enemy takes 0 damage.";
				enter();
			}


			cout << "\n";
			break;


		case '5': lineBreak();
			randomnumber = rand() % 5 + 1;


			if (randomnumber == 1 || randomnumber == 2 || randomnumber == 3)
			{
				cout << "BOOM!!! You nail the enemy in the face for " << 35 + e5 << " damage";
				enter();
				oppoPirate -= 35 + e5;

				if (oppoPirate <= 0)
				{
					oppoPirate = 0;
					cout << "\nYou have killed him!";
					enter2();
					break;
				}
			}
			else
			{
				cout << "DECKED! The enemy had a fast reaction and punched you before you could punch himYou take 35 Damage and the enemy receives a free shot while you are stunned.";
				NateHP -= 35;
				enter();
			}


			cout << "\n";
			break;



		}

		if (oppoPirate != 0)
		{
			randomnumber = 0;

			randomnumber = rand() % 4 + 1;

			if (randomnumber == 1 || randomnumber == 2 || randomnumber == 3)
			{
				pirateDmg2 = rand() % pirateDmg + 1;

				cout << "PEW!!! The enemy hits you for " << pirateDmg2 << " damage!";
				enter2();
				NateHP -= pirateDmg2;

				if (NateHP <= 0)
				{
					NateHP = 0;
					cout << "\nHe has has killed you!!\n";


					enter2();
					pageBreak();
					gameOver();
					cout << "\n\nWould you like to continue to next level? <y/n>:	";
					cin >> choicechar;

					if (choicechar == 'y' || choicechar == 'Y')
					{
						cout << "\nGreat! Let's get started then =)";
						cout << "\n";
						enter();
						pageBreak();
						loading();
						pageBreak();

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
				}

				/*cout << "THIS IS A TEST";	*/
			}
			else
			{
				cout << "The enemy missed! Drake dodged a bullet for 0 damage.";
				enter2();
			}

			cout << "\n";

			lineBreak();

			cout << "\nYour current health is " << NateHP << "/" << NateMAXhp << "\n"
				"Your enemies health is " << oppoPirate << "/" << n << "\n";


			enter2();

			lineBreak();
		}
	}

	return 0;
}

void boss()
{
	cout << "########   #######   ######   ######  #### \n"
		"##     ## ##     ## ##    ## ##    ## #### \n"
		"##     ## ##     ## ##       ##       #### \n"
		"########  ##     ##  ######   ######   ##  \n"
		"##     ## ##     ##       ##       ##      \n"
		"##     ## ##     ## ##    ## ##    ## #### \n"
		"########   #######   ######   ######  #### \n";


}

void theEnd()
{
	cout << "  ::::::::::: :::    ::: ::::::::::          :::::::::: ::::    ::: ::::::::: \n"
		"     :+:     :+:    :+: :+:                 :+:        :+:+:   :+: :+:    :+: \n"
		"    +:+     +:+    +:+ +:+                 +:+        :+:+:+  +:+ +:+    +:+  \n"
		"   +#+     +#++:++#++ +#++:++#            +#++:++#   +#+ +:+ +#+ +#+    +:+   \n"
		"  +#+     +#+    +#+ +#+                 +#+        +#+  +#+#+# +#+    +#+    \n"
		" #+#     #+#    #+# #+#                 #+#        #+#   #+#+# #+#    #+#     \n"
		"###     ###    ### ##########          ########## ###    #### #########  \n";

}

void cheat()
{
	cout << "This is the cheat screen. Please enter the proper code.";
	cout << "\n\n\n\n";
	cout << "CODE:	";
	cin >> choiceint;

	lineBreak();

	//Case for cheats
	switch (choiceint)
	{
		//case 200
	case 200: cout << "You have added 200HP to Drake's Hitpoints!";
		NateHP += 200;
		NateMAXhp += 200;
		enter();
		pageBreak();
		startMenu();
		break;

		//case 8055		
	case 8055: pageBreak();
		cout << "We are now skipping to the boss battle!";
		enter();
		game3_3();
		break;

		//case 8888		
	case 8888:	cout << "You have increased Nate's HP by 1000!";
		NateHP += 1000;
		NateMAXhp += 1000;
		enter();
		pageBreak();
		startMenu();
		break;



	default: cout << "That is not a valid code.";
	}

	enter2();

	startMenu();
}