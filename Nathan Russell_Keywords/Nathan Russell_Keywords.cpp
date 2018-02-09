// Nathan Russell_Keywords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

enum fields {WORD, HINT, NUM_FIELDS};
const int NUM_WORDS = 5;
const string WORDS[NUM_WORDS][NUM_FIELDS];

using namespace std;
using std::cout;

//int bacon[5] stores 5 integers
	//array initializer uses squiggly brackets to list numbers
	//must be in order : () [] {}
	//int Bacon[5] = {};
    //

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = {
	{"wall", "Do you feel you're head against something?"},
	{"glasses", "These might help you see the answer."},
	{"labored", "Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
	};


	return 0;
} 

