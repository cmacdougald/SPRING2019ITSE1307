// crmchp3ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream fileWrite;
	fileWrite.open("example.json");
	fileWrite << "{" 
		<< "\"name\":\"Chris\", "
		<< "\"city\":\"San Antonio\", "
		<< "\"state\":\"Texas\""
		<< "}" 
		<< endl;
	fileWrite.close();
    return 0;
}

