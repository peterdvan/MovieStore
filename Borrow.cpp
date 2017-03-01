#include "Borrow.h"

Borrow::Borrow(string data) {
	istringstream ss(data);
	ss >> transactionType;
	ss >> clientID;
	ss >> mediaType;
	ss >> movieType;
	getline(ss,movieData);
	cout << getTransactionType() << " " << getClientID() <<
		" " << getMediaType() << " " << getMovieType() << " " << getMovieData() << endl;
}



ostream& Borrow::print(ostream& output) const {
	output << transactionType << " " << clientID <<
		" " << mediaType << " " << movieType << " " << movieData << endl;
	return output;
}
char Borrow::getTransactionType() {
	return transactionType;
}

int Borrow::getClientID() {
	return clientID;
}

char Borrow::getMediaType() {
	return mediaType;
}

char Borrow::getMovieType() {
	return movieType;
}

string Borrow::getMovieData() {
	return movieData;
}

void Borrow::doTransaction()
{
}
