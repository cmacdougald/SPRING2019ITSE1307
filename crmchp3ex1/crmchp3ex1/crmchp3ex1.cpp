// crmchp3ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strName = "";
	cout << "Please enter your name: ";
	//cin >> strName; //Spaces break when I do this
	getline(cin, strName); //Works consistent every time
	cout << "Hello, " << strName << endl;
    return 0;
}

