#include "store.h"
#include "TransactionFactory.h"
#include "movieFactory.h"

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
void Store::buildClients(istream &clientData) {
    string tempLine = "";
    Client* temp;
    while (!clientData.eof()) {
        getline(clientData, tempLine);
        if (clientData.eof()) {
            break;
        }
        temp = new Client(tempLine);
        clientList.insert(temp);
    }

}
//TODO: FINISH
void Store::buildMovies(ifstream & movieData) {

    while (movieData.good()) {
        char type = '';
        string str;
        getline(movieData, str);
        if (str != "") {
            type = str[0];
            movieFactory factory;
            Movie* ptr = factory.buildMovie(str);
            switch(type){
                case 'C':
                    classicsMovies.insert(ptr);
                    break;
                case 'D':
                    dramaMovies.insert(ptr);
                    break;
                case 'F':
                    comedyMovies.insert(ptr);
                    break;
            }
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
