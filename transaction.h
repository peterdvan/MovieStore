#pragma once

#ifndef TRANSACTION_H
#define TRANSACTION_H


//--------------------------  class Transaction ----------------------------------
// Transaction ADT: A collection of certain data including an action, id number,
//                  type of media, and movie data.
// Implementation and assumptions:  
//   -- correctly formatted
//-----------------------------------------------------------------------------
#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Transaction {
	friend ostream& operator<<(ostream& output, Transaction action);
public:
	//constructor s
	Transaction(char type, int clientID, char mediaType, char movieType,
		int stock, string movieName);

	Transaction();

	Transaction(string & str);

	char getType();

	int getClientID();

	char getMediaType();

	char getMovieType();

	int getStock();

	string getMovieName();

	void readInData(string & data);

private:
	char type; // type of transaction
	int clientID; // id number of client
	char mediaType; // type of media
	char movieType; // type of movie
	int stock;
	string movieName;
};

#endif