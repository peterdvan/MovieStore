#include "History.h"
History::History(string data) {
	istringstream ss(data);
	ss >> transactionType;
	ss >> clientID;
	cout << getTransactionType() << " " << getClientID()  << endl;
}
char History::getTransactionType() {
	return transactionType;
}

int History::getClientID() {
	return clientID;
}
//void History::checkHistory(History * action)
//{
//	Store::displayCustomerHistory(action,action->getClientID);
//}
ostream& History::print(ostream& output) const {
	output << transactionType << " " << clientID  << endl;
	return output;
}


