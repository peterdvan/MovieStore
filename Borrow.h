#pragma once
#pragma once
#include <iostream>
#include <sstream>
#include "transaction.h"
using namespace std;
class Borrow: public Transaction {
public:
	Borrow(string data);
	char getTransactionType();
	int getClientID();
	char getMediaType();
	char getMovieType();
	string getMovieData();
	void doTransaction();
private:
	ostream& print(ostream & output) const;
	char transactionType; // type of transaction
	int clientID; // id number of client
	char mediaType; // type of media
	char movieType; // type of movie
	int stock;
	string movieData;
};