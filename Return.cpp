#include "Return.h"

Return::Return(string data) {
	istringstream ss(data);
	ss >> transactionType;
	ss >> clientID;
	ss >> mediaType;
	ss >> movieType;
	getline(ss, movieData);
	cout << getTransactionType() << " " << getClientID() <<
		" " << getMediaType() << " " << getMovieType() << " " << getMovieData() << endl;
}



ostream& Return::print(ostream& output) const {
	output << transactionType << " " << clientID << " " << mediaType << 
		" " << movieType << " " << movieData << endl;
	return output;
}
char Return::getTransactionType() {
	return transactionType;
}

int Return::getClientID() {
	return clientID;
}

char Return::getMediaType() {
	return mediaType;
}

char Return::getMovieType() {
	return movieType;
}

string Return::getMovieData() {
	return movieData;
}

void Return::doTransaction()
{
}
