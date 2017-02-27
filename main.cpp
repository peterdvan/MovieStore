

#include "classics.h"
#include "HashTable.h"
#include "store.h"
using namespace std;


int main() {
	ifstream transactionText("data4commands.txt");
	Store newStore;
	newStore.buildTransactions(transactionText);
	newStore.displayLog();







	return 0;
}