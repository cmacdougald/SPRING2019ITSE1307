// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;

int main()
{
	srand(time(NULL));

	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);
	
	//cout << objCard.toString() << endl;
	objDealer.setPlayerName("Dealer");
	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;

	objDeck.shuffle();

	for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
		objDealer.addCard(objDeck.getCard());
		objPlayer.addCard(objDeck.getCard());
	}

	//Should add some logic to prevent adding more cards that needed
	while (objDealer.getHandPointValue() <= 16) {
		objDealer.addCard(objDeck.getCard());
	}

	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;

	if (objDeck.shouldShuffle()) {
		objDeck.shuffle();
	}

	if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {

	}

    return 0;
}

