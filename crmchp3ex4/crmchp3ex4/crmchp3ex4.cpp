// crmchp3ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream fileWrite;
	fileWrite.open("example.html");
	fileWrite << "<html>" <<
		"<head><title>Example</title></head>" <<
		"<body><h1>Hello Everyone!</h1></body>" <<
		"</html>" << endl;
	fileWrite.close();
    return 0;
}

