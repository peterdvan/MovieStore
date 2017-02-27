#include "store.h"
using namespace std;
Store::Store() {
	
}

void Store::buildTransactions(ifstream & transactionData) {
	while (transactionData.good()) {
		string str;
		getline(transactionData, str);
		if (str != "") {
			Transaction* ptr = new Transaction(str);
			transactionLog.push(ptr);
		}
	}
}

void Store::startDay() {
	while (!transactionLog.empty()) {
		Transaction* ptr = transactionLog.front();
		if (ptr->getType() == 'H') {
			displayLog();
		}
		else if (ptr->getType() == 'R') {

		}
		else if (ptr->getType() == 'B') {

		}
		else if (ptr->getType() == 'I') {
			showInventory();
		}
		transactionLog.pop();
	}
}

void Store::displayLog() {
	cout << "Store's Transaction History" << endl;
	while (!transactionLog.empty()) {
		Transaction* action = transactionLog.front();
		transactionLog.pop();
		cout << *action << endl;
		//transactionLog.push(action);
	}
}

// displays inventory
void Store::showInventory() {

}

void Store::borrowItem() {

}

void Store::returnItem() {

}
