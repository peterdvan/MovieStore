
#include "transaction.h"
Transaction::Transaction(char type, int clientID, char mediaType, char movieType,
	int stock, string movieName) {
	this->type = type;
	this->clientID = clientID;
	this->mediaType = mediaType;
	this->movieType = movieType;
	this->stock = stock;
	this->movieName = movieName;
}
Transaction::Transaction() {
	this->type = NULL;
	this->clientID = -1;
	this->mediaType = NULL;
	this->movieType = NULL;
	this->stock = -1;
	this->movieName = "";
}
Transaction::Transaction(string& str) {
	readInData(str);
}
char Transaction::getType() {
	return type;
}

int Transaction::getClientID() {
	return clientID;
}

char Transaction::getMediaType() {
	return mediaType;
}

char Transaction::getMovieType() {
	return movieType;
}

int Transaction::getStock() {
	return stock;
}

string Transaction::getMovieName() {
	return movieName;
}

// should depend on type
ostream& operator<<(ostream& output, Transaction action) {
	if (action.type == 'B' || action.type == 'R') {
		output << action.type << " " << action.clientID << " " << action.mediaType << " " << action.movieType << " " << action.stock << action.getMovieName();
	}
	else if (action.type == 'H') {
		output << action.type << " " << action.clientID;
	}
	else { // it can only be I, errors would have been check during transaction process
		output << action.type;
	}
	output << endl;
	return output;
}

// currently reads in all data, even bad data, error check when you process
void Transaction::readInData(string& data) {
	istringstream str (data);
	str >> type;
	if (type == 'B' || type == 'R') {
		str >> clientID;
		str >> mediaType;
		str >> movieType;
		str >> stock;
		str >> movieName; // not sure if this will work

	}
	else if (type == 'H') {
		str >> clientID;

	}
	else if (type == 'I') {
		// I, doesnts have anything come after it
	}
	else {

	}
}