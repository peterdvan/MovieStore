#include "transactionFactory.h"
#include "Borrow.h"
#include "Inventory.h"
#include "History.h"
#include "Return.h"
#include "transaction.h"
Transaction* TransactionFactory::buildTransaction(string data) {
    char type = data[0];
    switch (type) {
        case 'B':
            return new Borrow(data);
            break;
        case 'R':
            return new Return(data);
            break;
        case 'H':
            return new History(data);
            break;
        case 'I':
            return new Inventory(data);
            break;
    }
}

void TransactionFactory::doTransaction(Transaction* action) {
    char type = action->getTransactionType();
    switch (type) {
        case 'I':
            break;
        case 'H':

            break;
        case 'R':

            break;
        case 'W':

            break;
    }
}

