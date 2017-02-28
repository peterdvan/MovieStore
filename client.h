/* Client ADT: A person that holds certain data pertaining to
*              a bank account.
*  Implementation and Assumptions:
*  Assumes that the Banker class will handle �Move� transactions,
* which involve more than one client
* Assumes account class knows when it can overdraw
*/

#ifndef CLIENT_H
#define CLIENT_H
#include <queue>
#include "transaction.h"
#include <sstream>
using namespace std;
class Client {
	//defiens a way to print clients
	friend ostream& operator<<(ostream& output, const Client &person);
public:
	Client();
	Client(string data); // default constructor
						 // constructor
	//Client(int num);

	// De-allocates all memory used
	~Client();

	bool operator==(const Client &) const;

	void displayLog();
	int getId();



private:
	queue<Transaction> log; // queue of transactions
	string firstName;
	string lastName;
	int clientId;
};
#endif