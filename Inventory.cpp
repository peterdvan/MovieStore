#include "Inventory.h"

Inventory::Inventory(string data) {
	transactionType = data[0];
	cout << getTransactionType() << endl;
}

ostream& Inventory::print(ostream& output) const {
	output << transactionType << endl;
	return output;
}
char Inventory::getTransactionType() {
	return transactionType;
}

