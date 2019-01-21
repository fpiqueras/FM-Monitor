#ifndef CARD_H
#define CARD_H

#include <string>
#include "../constants.h"

using std::string;

class Card {
	int cardnumber;
	string name;
	string description;
	int atk;
	int def;
	int gstar1;
	int gstar2;
	int type;
	int attribute;		// Depreciated
	int password;
	int cost;
	int droprate;		// Out of 2048
	int compareMode;	// Definition in constants
	//fusion*
	//equips*
	//drops*
	
	Card();
	
	Card(int cardnumber, string name, string description; int atk, int def, int gstar1, 
	int gstar2, int type, int attribute, int password, int cost, int droprate); 
	
	/* Swap idiom */
	void swap(Card &other);
	
	/* Big Five */
	Card (const Card &other);
	Card &operator=(const Card &other);
	Card (Card &&other);
	Card &operator=(Card &&other);
	~Card();
	
	/* Getters */
	int getCardnumber() const;
	string getName() const;
	string getDescription() const;
	int getAtk() const;
	int getDef() const;
	int getGstar1() const;
	int getGstar2() const;
	int getType() const;
	int getAttribute() const;
	int getPassword() const;
	int getCost() const;
	int getDroprate() const;
	
	friend inline bool operator == (const Card &lhs, const Card &rhs){
		return (lhs.cardnumber == rhs.cardnumber);
	}

	friend inline bool operator < (const Node &lhs, const Node &rhs){
		return (lhs.atk < rhs.atk);
	}
	
};

#endif //CARD_H