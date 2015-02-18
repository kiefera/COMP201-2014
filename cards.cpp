#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Not required to make it caps, but it's conventional
enum Suit {HEARTS, SPADES, CLUBS, DIAMONDS};
enum Rank {
	TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
	JACK, QUEEN, KING, ACE
};

const string suits[]= {"Hearts", "Spades", "Clubs","Diamonds"};
const string ranks[] = {"2", "3", "4", "5", "6", "7","8","9","Jack","Queen","King","Ace"};

typedef struct{
	Suit suit;
	Rank rank;
} Card;

//Forward declaration
void printCard(Card card)
{
	cout << ranks[card.rank] << " of " << suits[card.suit] << endl;
}

vector<Card> makedeck()
{
	//create a vector
	//create all the cards
	//for each suit, and for each rank, create the appropriate card
	//return the vector
	
	vector<Card> deck;
	Card card;
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 13; j++)
		{
			card.suit = (Suit) i;
			card.rank = (Rank) j;
			deck.push_back(card);
		}
	}
	
	return deck;
}

int main()
{
	int age;
	string name;
	
	vector<Card> deck = makedeck();
	
	for (int i = 0; i < deck.size(); i++)
	{
		printCard(deck[i]);
		cout << endl;
	}
	
	
	return 0;
}