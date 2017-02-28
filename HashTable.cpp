#include "HashTable.h"

using namespace std;

HashTable::HashTable() {
	arr = new ColumnNode[991];
	size = 991;
	for (int i = 0; i < size; i++) {
		arr[i].id = i;
		arr[i].firstNode = NULL;
	}
}

HashTable::HashTable(int columns) {
	arr = new ColumnNode[columns];
	size = columns;
	for (int i = 0; i < columns; i++) {
		arr[i].id = i;
		arr[i].firstNode = NULL;
	}
}

HashTable::~HashTable() {

	for (int i = 0; i < size; i++) {
		if (arr[i].firstNode != NULL) {
			makeEmptyHelper(arr[i].firstNode);
		}
	}

	delete arr;
}

void HashTable::makeEmptyHelper(Node* dataContainer) {
	if (dataContainer != NULL) {
		makeEmptyHelper(dataContainer->next);
		delete dataContainer->data;
	    delete dataContainer;
	}
}
int HashTable::hash(Client* customer) {
	int key = customer->getId();
	while (key > 10) {
		key /= 10;
	}
	return key;
}
void HashTable::insert(Client* customer) {
	int key = hash(customer);
	Node* tmp = arr[key].firstNode;
	arr[key].firstNode = new Node();
	arr[key].firstNode->data = customer;
	arr[key].firstNode->next = tmp;
}
bool HashTable::findClient(Client* target, Client *& retrieved){
	int arrayLocation = hash(target);
	Node* current = arr[arrayLocation].firstNode;
	if (current == NULL) {
		return false;
	} else {
		while (current != NULL) {
			if (*current->data == *target) {
				retrieved = current->data;
				return true;
			} else {
				current = current->next;
			}
		}
		retrieved = NULL;
		return false;
	}
}

