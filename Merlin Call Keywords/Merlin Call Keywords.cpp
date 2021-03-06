// Merlin Call Keywords.cpp : Defines the entry point for the console application.
//word Jumble
//The classic word jumble game where the player can ask for a hint


//includes the following for coding
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//using the namespace of std
using namespace std;

//main program purpose
int main()
{
	//using the enum fields, a constant int and a string or words and hints.
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{ "essay", "What you write in english class" },
	{ "heores", "Main progatinists of myths and legends" },
	{ "hercules", "Famous greek and roman hero" },
	{ "apollo", "Greek god of the sun" },
	{ "olympians", "Main greek and roman pantheon" },
	{ "school", "What most people go to" },
	{ "thanatos", "Greek personification of death" },
	{ "technology", "What UAT is built around" },
	{ "dungeons", "Where most criminals were put in castles" },
	{ "tired", "What you feel after a long day" }
	};
	//using a static cast and makes an int for the random word chosen
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	//word to guess
	string theWord = WORDS[choice][WORD];
	//hint for the word
	string theHint = WORDS[choice][HINT];

	//choses the work, the size of the word and randomizing the letter order
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	
	
	int choice2 = (rand() % NUM_WORDS);
	//word to guess
	string theWord2 = WORDS[choice2][WORD];
	//hint for the word
	string theHint2 = WORDS[choice2][HINT];

	//choses the work, the size of the word and randomizing the letter order
	string jumble2 = theWord2;
	int length2 = jumble2.size();
	for (int ii = 0; ii < length2; ++ii)
	{
		int index11 = (rand() % length2);
		int index22 = (rand() % length2);
		char temp2 = jumble2[index11];
		jumble2[index11] = jumble2[index22];
		jumble2[index22] = temp2;
	}

	int choice3 = (rand() % NUM_WORDS);
	//word to guess
	string theWord3 = WORDS[choice3][WORD];
	//hint for the word
	string theHint3 = WORDS[choice3][HINT];

	//choses the work, the size of the word and randomizing the letter order
	string jumble3 = theWord3;
	int length3 = jumble3.size();
	for (int iii = 0; iii < length3; ++iii)
	{
		int index111 = (rand() % length3);
		int index222 = (rand() % length3);
		char temp3 = jumble3[index111];
		jumble3[index111] = jumble3[index222];
		jumble3[index222] = temp3;
	}
	//prints out the intro message
	cout << "Welcome to the new CIA Decoder training simulater\n";
	cout << "Unscramble the letters to solve the message.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to exit the simulater.\n\n";
	cout << "The message is: " << jumble;
	//has the player guess
	string guess;
	cout << "\nYour guess: ";
	cin >> guess;
	//does something depending on what the player input whether it is correct or wrong
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "Sorry, that's not the message.";
		}
		cout << "\nYour guess: ";
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "\nThat's it! You solved the first message!";
	}
	cout << "\nPrepare to solve the next message.\n";

	//prints out the intro message to the next word
	cout << "\nUnscramble the letters to solve the second message.\n\n";
	cout << "The message is: " << jumble2;
	//has the player guess
	string guess2;
	cout << "\nYour guess: ";
	cin >> guess2;
	//does something depending on what the player input whether it is correct or wrong
	while ((guess2 != theWord2) && (guess2 != "quit"))
	{
		if (guess2 == "hint")
		{
			cout << theHint2;
		}
		else
		{
			cout << "Sorry, that's not the message.";
		}
		cout << "\nYour guess: ";
		cin >> guess2;
	}

	if (guess2 == theWord2)
	{
		cout << "\nThat's it! You solved the second message!\n";
	}
	cout << "\nPrepare to solve the next message.\n";

	//prints out the intro message to the next word
	cout << "\nUnscramble the letters to solve the last message.\n\n";
	cout << "The message is: " << jumble3;
	//has the player guess
	string guess3;
	cout << "\nYour guess: ";
	cin >> guess3;
	//does something depending on what the player input whether it is correct or wrong
	while ((guess3 != theWord3) && (guess3 != "quit"))
	{
		if (guess3 == "hint")
		{
			cout << theHint3;
		}
		else
		{
			cout << "Sorry, that's not the message.";
		}
		cout << "\nYour guess: ";
		cin >> guess3;
	}

	if (guess3 == theWord3)
	{
		cout << "\nThat's it! You solved the last message!";
	}
	cout << "\nThat was the last message restart if you want another set of messages to solve.\n";

	//pauses the system so you can see the output
	system("pause");

	return 0;
}

