#pragma once
#include "transaction.h"
class transactionFactor {

public:
	virtual void doTransaction();
	virtual friend ostream& operator<<(ostream& output, Transaction action);
};