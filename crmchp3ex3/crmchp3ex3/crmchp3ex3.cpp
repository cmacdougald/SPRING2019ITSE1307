// crmchp3ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fileRead;
	string strFileContents = "";
	fileRead.open("name.vcf");
	getline(fileRead, strFileContents);
	cout << strFileContents;
	fileRead.close();

    return 0;
}

