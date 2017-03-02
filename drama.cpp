#include "drama.h"
Drama::Drama(string data) {
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
	yearOfRelease = atoi(token.c_str());
}
Drama::~Drama() {

}
bool Drama::lessThanHelper(const Movie& other) {
	const Drama* rhs = dynamic_cast<const Drama*>(&other);
	if (director != rhs->director) {
		return director < rhs->director;
	}
	else {
		return title < rhs->title;
	}
}
bool Drama::greaterThanHelper(const Movie& other) {
	const Drama* rhs = dynamic_cast<const Drama*>(&other);
	if (director != rhs->director) {
		return director > rhs->director;
	}
	else {
		return title > rhs->title;
	}
}
bool Drama::equalHelper(const Movie &other) const {
	const Drama* comedyOther = dynamic_cast<const Drama*>(&other);
	if(getTitle() == comedyOther->getTitle()){
		return true;
	}
	return false;
}
ostream& Drama::print(ostream & out) const {
	out<<title;
	return out;
}