// crmchp2ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intGuess = 20;
	int intAnswer = 23;

	cout << "\nEnter a whole number for your guess: ";
	//cin >> intGuess;
	cout << endl << "You entered " << intGuess << " for your guess. The number we were looking for was " << intAnswer << ".";
    
	return 0;
}

