// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intCard = 34;
	int intFaceValue = 0;
	int intSuiteValue = 0;

	intFaceValue = ((intCard - 1) % 13) + 1;
	intSuiteValue = ((intCard - 1) / 13) + 1;

	cout << "{"
		<< "\"card\": " << intCard << ", "
		<< "\"face\": " << intFaceValue << ", "
		<< "\"suite\": " << intSuiteValue
		<< "}" << endl;

    return 0;
}

