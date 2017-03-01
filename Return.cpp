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

ostream& operator<<(ostream& output, Return action) {
	output << action.getTransactionType() << " " << action.getClientID() <<
		" " << action.getMediaType() << " " << action.getMovieType() << " " << action.getMovieData() << endl;
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
