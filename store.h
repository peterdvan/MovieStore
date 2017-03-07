#pragma once
/* --------------------------- class Store ---------------------------------
* Store ADT:
* The store manages all of the customers, their transaction
* requests, and the inventory of movies. The store is the interface to
* interacting with borrowing or returning movies and tracking customers.
***
* Implementation:
* There are three buckets of data: a queue of commands, a hash-table of
* customers, and a binary tree of the movies currently in stock (inventory).
*
* There are also numerous functions. Store is able to build the customer,
* inventory, and commands lists of data (from three separate files). It
* initializes the program's actions, handles the borrowing and returning of
* movies, can display the current inventory of movies, and show the
* transaction history of a given client.
*
* Borrow and return are overloaded twice, one for each type of movie due to
* them being identified uniquely by their sorting attributes.
***
* Assumptions:
* Main instantiates a Store object and then startDay() is called.
* --------------------------------------------------------------------------
*/
#include <queue>
#include "transaction.h"
#include "client.h"
#include <string>
#include <sstream>
#include <fstream>
#include "HashTable.h"
#include "movie.h"
#include "bintree.h"

using namespace std;
class Store {
public:
	Store();
	// reads in data from file and initiates client
	// objects and stores them in the BST
	void buildClients(istream & clientData);

	//prints the history of all accounts opening and closing balances
	void report()const;
	void displayLog();
	//reads transactions from file and puts them into queue
	void buildTransactions(ifstream & );
	void buildMovies(ifstream &);


	//loop that runs through the Transaction queue until empty
	void startDay();
	void displayCustomerHistory(int clientID);
	void displayInvertory();
private:
	queue<Transaction*> transactionLog; // storage of transaction data
	HashTable clientList;				//	Hash table of customers
	BinTree classicsMovies;
	BinTree dramaMovies;
	BinTree comedyMovies;
	void showInventory();
	void returnItem();
	void borrowItem();
};