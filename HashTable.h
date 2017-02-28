#pragma once
#include "client.h"
using namespace std;

class HashTable {
public:
	HashTable();
	~HashTable();
	HashTable(int);
	//void createTable();
	//bool isEmpty();
	void insert(Client*);
	bool findClient(Client*, Client*&);


protected:
	
	struct Node {            // the node in a linked list
		Client* data;              // pointer to actual data, operations in T
		Node* next;
	};
	struct ColumnNode {
		int id;
		Node* firstNode;
	};
	void makeEmptyHelper(Node * data);
	int hash(Client*);
	ColumnNode* arr;
	int size;
};
