#include "transactionFactory.h"
#include "Borrow.h"
#include "Inventory.h"
#include "History.h"
#include "Return.h"
#include "transaction.h"
#include "store.h"

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


void TransactionFactory::doTransaction(Transaction* action, Store* st) {
    char type = action->getTransactionType();
    switch (type) {
        case 'I': {
            Inventory* newAction = dynamic_cast<Inventory *>(action);

        }
            break;
        case 'H': {
            History* newAction = dynamic_cast<History *>(action);
            st->displayCustomerHistory(newAction->getClientID());
        }
            break;
        case 'R': {
            Return* newAction = dynamic_cast<Return *>(action);

        }
            break;
        case 'B': {
            Borrow* newAction = dynamic_cast<Borrow *>(action);

        }
            break;
    }
}

TransactionFactory::TransactionFactory()
{
}

TransactionFactory::~TransactionFactory()
{
}

