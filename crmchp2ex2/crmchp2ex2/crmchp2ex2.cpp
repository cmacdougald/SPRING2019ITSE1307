// crmchp2ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/* Chris MacDougald
20190205

This program is an example of simple calculations with distance over time AKA velocity.
*/

int main()
{
	//variables
	int intDistance = 0;
	int intTime = 1;
	float fltVelocity = 0.0;

	//input prompts
	cout << endl << "Enter the distance traveled in meters: ";
	cin >> intDistance;
	cout << endl << "Enter the time taken to travel that distance in seconds: ";
	cin >> intTime;

	//processing 
	fltVelocity = (float) intDistance / (float) intTime;

	//output - first
	cout << endl << "The velocity is " << fltVelocity << " m/s ." << endl;
    return 0;
}

