#include "store.h"
#include "TransactionFactory.h"
#include "movieFactory.h"

using namespace std;
Store::Store() {

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
void Store::buildMovies(ifstream & movieData) {

	while (movieData.good()) {
		char type = '~';
		string str;
		getline(movieData, str);
		if (str != "") {
			type = str[0];
			movieFactory factory;
			Movie *ptr = factory.buildMovie(str);
			switch (type) {
				case 'C':
					//cout<<*ptr<<endl;
					classicsMovies.insert(ptr);
					break;
				case 'D':
					//cout<<*ptr<<endl;
					dramaMovies.insert(ptr);
					break;
				case 'F':
					//cout<<*ptr<<endl;
					comedyMovies.insert(ptr);
					break;
			}
		}
	}
}
void Store::buildTransactions(ifstream & transactionData) {
	while (transactionData.good()) {
		string str;
		getline(transactionData, str);
		if (str != "") {
			Transaction* ptr = TransactionFactory::buildTransaction(str);
			transactionLog.push(ptr);
		}
	}
}

void Store::startDay() {
	//TransactionFactory fact;
	while (!transactionLog.empty()) {
		Transaction* ptr = transactionLog.front();
		//fact.doTransaction(ptr,this);
		TransactionFactory::doTransaction(ptr, this);

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

void Store::displayCustomerHistory(int clientID) {
	Client* clientFinder = nullptr;
	Client newClient(clientID);
}
void Store::displayInvertory() {
	cout << comedyMovies;
	cout << dramaMovies;
	cout << classicsMovies;
}