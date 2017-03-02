#include "client.h"
Client::Client() {

}
Client::Client(string data) {
	istringstream str(data);
	str >> clientId;
	str >> lastName;
	str >> firstName;
}
Client::~Client() {

}
/*void Client::displayLog() {
	cout << "Client " << clientId << "'s Transaction History" << endl;
	while (!log.empty()) {
		Transaction* action = log.front();
		log.pop();
		cout << action << endl;
		log.push(action);
	}
}*/

int Client::getId() {
	return clientId;
}
bool Client::operator==(const Client & other) const {
	if (other.clientId == clientId) {
		return true;
	}
	else {
		return false;
	}
}