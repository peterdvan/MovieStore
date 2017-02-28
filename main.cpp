

#include "classics.h"
#include "HashTable.h"
#include "store.h"
using namespace std;


int main() {
	ifstream transactionText("data4commands.txt");
	ifstream clientText("customers.txt");
	Store newStore;
//	newStore.buildTransactions(transactionText);
    newStore.buildClients(clientText);
//	newStore.displayLog();







	return 0;
}