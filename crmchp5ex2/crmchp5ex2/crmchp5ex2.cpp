// crmchp5ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intDefaultStart = 0;
	int intLimit = 10;
	for (int intCounter = intDefaultStart;
		intCounter <= intLimit;
		intCounter++) {
		cout << "For: " << intCounter << endl;
	};
    return 0;
}

