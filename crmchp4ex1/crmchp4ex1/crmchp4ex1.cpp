// crmchp4ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int intValue = 0;
	int intTesting = 5;
	string strValue = "Testing!";
	string strTesting = "Testing";

	//cerr << "Before" << endl;
	if (strValue > strTesting) {
		cout << "Value: " << strValue << " is greater than testing: " << strTesting << endl;
	}

	if ((strValue < strTesting) && 
		(intValue < intTesting)) {
		cout << "Value less than testing!" << endl;
	}
	else {
		cout << "Value is not less than testing!" << endl;
	}
	//cerr << "After" << endl;

	return 0;
}

