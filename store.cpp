#include "store.h"
#include "TransactionFactory.h"
using namespace std;
Store::Store() {
	
}


void Store::buildTransactions(ifstream & transactionData) {
	while (transactionData.good()) {
		string str;
		getline(transactionData, str);
		if (str != "") {
			TransactionFactory factory;
			Transaction* ptr = factory.buildTransaction(str);
			transactionLog.push(ptr);
		}
	}
}

void Store::startDay() {

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
void Store::buildClients(istream &input) {
	string tempLine = "";
	Client* temp;
	while (!input.eof()) {
		getline(input, tempLine);
		if (input.eof()) {
			break;
		}
		temp = new Client(tempLine);
		clientList.insert(temp);
	}

}

// displays inventory
void Store::showInventory() {

}

void Store::borrowItem() {

}

void Store::returnItem() {

}
