#include "classics.h"
Classics::Classics(string data) {
	istringstream ss(data);
	string token = "", placeholder = "";
	getline(ss, token, ',');//get the type

	getline(ss, token, ',');//get the quantity
	stock = atoi(token.c_str());

	getline(ss, token, ',');//get the director
	director = token;

	getline(ss, token, ',');//get the title
	title = token;

	getline(ss, token, ',');//get the year of release

	getline(ss, token, ' ');
	stringstream s(token);
	s >> majorActorFirstName;

	s >> majorActorLastName;

	s >> placeholder;
	releaseMonth = atoi(placeholder.c_str());

	s >> placeholder;
	yearOfRelease = atoi(placeholder.c_str());
}
Classics::~Classics() {

}
bool Classics::lessThanHelper(const Movie&other) {
	const Classics* rhs = dynamic_cast<const Classics*>(&other);
	if (yearOfRelease != rhs->yearOfRelease) {
		return yearOfRelease < rhs->yearOfRelease;
	}
	else {
		return majorActorLastName +majorActorFirstName <
				rhs->majorActorLastName + rhs ->majorActorFirstName;
	}
}
bool Classics::greaterThanHelper(const Movie&other) {
	const Classics* rhs = dynamic_cast<const Classics*>(&other);
	if (yearOfRelease != rhs->yearOfRelease) {
		return yearOfRelease > rhs->yearOfRelease;
	}
	else {
		return majorActorLastName + majorActorFirstName >
			   rhs->majorActorLastName + rhs ->majorActorFirstName;
	}
}
bool Classics::equalHelper(const Movie &other) const {
	const Classics* comedyOther = dynamic_cast<const Classics*>(&other);
	if(getTitle() == comedyOther->getTitle()){
		return true;
	}
	return false;
}
ostream& Classics::print(ostream & out) const {
	out<<title;
	return out;
}