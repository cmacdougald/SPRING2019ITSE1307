// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int getCardRandom() {
	return rand() % 52 + 1; //Give me a number between 0 and 51 then add 1.
}

int getCardFaceValue(int intCard) {
	return ((intCard - 1) % 13) + 1;
}

int getCardSuiteValue(int intCard) {
	return ((intCard - 1) / 13) + 1;
}

int getCardPointValue(int intCard) {
	int intTempCardValue = getCardFaceValue(intCard);
	return (intTempCardValue > 10) ? 10 : intTempCardValue;
}

string getCardSuiteString(int intCard) {
	string strSuite = "";
	switch (getCardSuiteValue(intCard)) {
	case 1:
		strSuite = "Clubs";
		break;
	case 2:
		strSuite = "Diamonds";
		break;
	case 3:
		strSuite = "Hearts";
		break;
	case 4:
		strSuite = "Spades";
		break;
	default:
		strSuite = "ERROR";
	}
	return strSuite;
}

string getCardFaceString(int intCard) {
	string strFace = "";
	int intCardValue = getCardFaceValue(intCard);
	switch (intCardValue) {
	case 1:
		strFace = "Ace";
		break;
	case 11:
		strFace = "Jack";
		break;
	case 12:
		strFace = "Queen";
		break;
	case 13:
		strFace = "King";
		break;
	default:
		strFace = to_string(intCardValue);
	}
	return strFace;
}

string getCardString(int intCard) {
	string strCard = getCardFaceString(intCard);
	strCard += " of ";
	strCard += getCardSuiteString(intCard);
	return strCard;
}

void printCardJSON(int pintCard) {
	cout << "{"
		<< "\"card\": " << pintCard << ", "
		<< "\"face\": " << getCardFaceValue(pintCard) << ", "
		<< "\"suite\": " << getCardSuiteValue(pintCard) << ", "
		<< "\"points\": " << getCardPointValue(pintCard) << ", "
		<< "\"string\": \"" << getCardString(pintCard) << "\""
		<< "}" << endl;
	return;
}

int getHandPointValue(vector<int> pvtrHand) {
	int intTotalPointValue = 0;
	int intTempPointValue = 0;
	bool boolAce = false;
	for (int intCardIndex = 0;
		intCardIndex < pvtrHand.size();
		intCardIndex++) {
		intTempPointValue = getCardPointValue(pvtrHand.at(intCardIndex));
		intTotalPointValue += intTempPointValue;
		if (intTempPointValue == 1) {
			boolAce = true;
		}
	}
	if (boolAce && intTotalPointValue <= 11) {
		intTotalPointValue += 10;
	}
	return intTotalPointValue;
}

void printHand(vector<int> pvtrHand) {
	for (int intCardIndex = 0;
		intCardIndex < pvtrHand.size();
		intCardIndex++) {
		if (intCardIndex > 0) {
			cout << ", ";
		}
		else {
			cout << " ";
		}
		cout << getCardString(pvtrHand.at(intCardIndex));
	}
	cout << ", Point Value: " << getHandPointValue(pvtrHand);
	cout << endl;
	return;
}

void printHandJSON(vector<int> pvtrHand) {
	for (int intCardIndex = 0; 
		intCardIndex < pvtrHand.size();
		intCardIndex++) {
		printCardJSON(pvtrHand.at(intCardIndex));
	}
	return;
}



int main()
{
	vector<int> vtrPlayerHand;
	int intPlayerTotal = 0;
	vector<int> vtrDealerHand;
	int intDealerTotal = 0;

	srand(time(NULL));
	
	vtrPlayerHand.push_back(getCardRandom());
	vtrPlayerHand.push_back(getCardRandom());
	printHand(vtrPlayerHand);
	intPlayerTotal = getHandPointValue(vtrPlayerHand);

	do {
		vtrDealerHand.push_back(getCardRandom());
		printHand(vtrDealerHand);
		intDealerTotal = getHandPointValue(vtrDealerHand);
	} while (intDealerTotal < 16);

	if (intPlayerTotal >= intDealerTotal) {
		cout << "Player Wins!" << endl;
	}
	else {
		cout << "Dealer Wins!" << endl;
	}

    return 0;
}

