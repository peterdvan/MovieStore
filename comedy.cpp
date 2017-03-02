#include "comedy.h"
using namespace std;

Comedy::Comedy(string data) {
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

Comedy::~Comedy() {

}

bool Comedy::lessThanHelper(const Movie& other) {
	const Comedy* rhs = dynamic_cast<const Comedy*>(&other);
	if (title != rhs->title) {
		return title < rhs->title;
	}
	else {
		return yearOfRelease < rhs->yearOfRelease;
	}
}

bool Comedy::greaterThanHelper(const Movie& other) {
	const Comedy* rhs = dynamic_cast<const Comedy*>(&other);
	if (title != rhs->title) {
		return title > rhs->title;
	}
	else {
		return yearOfRelease > rhs->yearOfRelease;
	}
}
bool Comedy::equalHelper(const Movie &other) const {
    const Comedy* comedyOther = dynamic_cast<const Comedy*>(&other);
	return (getTitle() == comedyOther->getTitle()) &&
		   (getReleaseYear() == comedyOther->getReleaseYear()) &&
		   (getDirector() == comedyOther->getDirector());

}
ostream& Comedy::print(ostream & out) const {
	out << "F, " << stock << ", " << director << ", " << " " << title << ", "
		<< yearOfRelease;
    return out;
}