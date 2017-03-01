#pragma once
#pragma once
#include <iostream>
#include <sstream>
#include "transaction.h"
using namespace std;
class History : public Transaction {
public:
	History(string data);
	char getTransactionType();
	int getClientID();
	void doTransaction();
private:
	ostream & print(ostream & output) const;
	char transactionType; // type of transaction
	int clientID;
    
};