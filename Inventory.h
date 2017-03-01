#pragma once
#pragma once
#include <iostream>
#include <sstream>
#include "transaction.h"
using namespace std;
class Inventory : public Transaction {
public:
	Inventory(string data);
	char getTransactionType();
	void doTransaction();
private:
	ostream & print(ostream & output) const;
	char transactionType; // type of transaction


};