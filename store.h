#pragma once
//--------------------------  class Transaction ----------------------------------
// Transaction ADT: 
// Implementation and assumptions:  
//   -- correctly formatted data
//--------------------------------------------------------------------------------
#include <queue>
#include "transaction.h"
#include "client.h"
#include <string>
#include <sstream>
#include <fstream>
#include "HashTable.h"
using namespace std;
class Store {
public:
	Store();

	void buildTransactions(istream & transactionData);

	// reads in data from file and initiates client 
	// objects and stores them in the BST
	void buildClients(istream & infile);

	//prints the history of all accounts opening and closing balances
	void report()const;
	void displayLog();
	//reads transactions from file and puts them into queue
	void buildTransactions(ifstream & transactionData);


	//loop that runs through the Transaction queue until empty 
	void startDay();
private:
	queue<Transaction*> transactionLog; // storage of transaction data
	HashTable clientList;				//	Hash table of customers
								// Hash table of inventory
	void showInventory();
	void returnItem();
	void borrowItem();
};