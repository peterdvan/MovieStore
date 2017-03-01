#include "classics.h"
Classics::Classics(string data) {
	istringstream ss(data);
	string token;
	getline(ss, token, ',');//get the type

	getline(ss, token, ',');//get the quantity
	stock = atoi(token.c_str());

	getline(ss, token, ',');//get the director
	director = token;

	getline(ss, token, ',');//get the title
	title = token;

	getline(ss, token, ',');//get the year of release
	vector<string> parts;
	split(token, ' ', parts);
	majorActorFirstName = parts[0];
	majorActorLastName = parts[1];
	releaseMonth = atoi(parts[2]);
	yearOfRelease = atoi(parts[3]);
}
Classics::~Classics() {

}
bool Classics::lessThanHelper(const Movie&rhs) {
	if (yearOfRelease != rhs.yearOfRelease) {
		return yearOfRelease < rhs.yearOfRelease;
	}
	else {
		return majorActor < rhs.majorActor;
	}
}
bool Classics::greaterThanHelper(const Movie&rhs) {
	if (yearOfRelease != rhs.yearOfRelease) {
		return yearOfRelease > rhs.yearOfRelease;
	}
	else {
		return majorActor > rhs.majorActor;
	}
}