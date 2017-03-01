#pragma once
#include "transaction.h"
using namespace std;
//--------------------------  class TransactionFactory ------------------------
// TransactionFactory ADT: A class used to hide information from the user
//                  
// Implementation and assumptions:  
//   -- correctly formatted
//-----------------------------------------------------------------------------
class TransactionFactory {

public:
	Transaction* buildTransaction(string);
	void doTransaction(Transaction * action);
 
};