// crmpythagoras.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int intSideA = 4;
	int intSideB = 5;
	double dblSideC = 0;

	cout << "Pythagoras Theorem Solver" << endl;
	cout << "Please enter the first side length of the triangle: ";
	cin >> intSideA;
	cout << "Please enter the second side length of the triangle: ";
	cin >> intSideB;

	dblSideC = sqrt(pow(intSideA, 2) + (intSideB * intSideB));

	cout << "The third side has a length of: " << dblSideC << endl;
    return 0;
}

