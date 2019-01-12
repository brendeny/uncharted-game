#pragma once

//header.h

#include "game1_h.h"
#include "game2_h.h"
#include "game3_h.h"
#include <windows.h>
#include <dos.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

//Void lineBreak creates spaces
void lineBreak();

//Void pageBreak skips to new page
void pageBreak();

//Intro Screen Void Function
void intro();

//Void function for enter to continue
void enter();

//Short Prologue and int for sleep
void prologue();
const int prologueSleep = 1;
extern int l;

void sleep(int delay);

//Pause function to cause a pause
void pause();
const int paused = 1;

//Start Menu Screen
void startMenu();

//Void skull and crossbones function
void skullXbones();

//Instruction screen
void instruction();

//Hint Screen 1
void hintscr1();

//enter1
void enter1();

//Loading function
void loading();

//strSize is for input strings
const int strsize = 100;

//Game over screen
void gameOver();

//Terminate is a function that terminates the game
void terminates();

//Battle Function
int battleFunction(int, int, int, int, int, int, int);

//Structure for Pirates
struct pirate			// 	structure description
{
	int hp;			//	Hitpoints of pirate
	int dmg;			// 	Damage of pirate
};

//attackMenu for the attack menu
void attackMenu();

//enter2 function /w text
void enter2();

//Boss ASCII art
void boss();

//The End ASCII art
void theEnd();

//Cheat is the cheat screen
void cheat();