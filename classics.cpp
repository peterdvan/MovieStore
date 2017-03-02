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
string Classics::getMajorActor() const{
	return majorActorFirstName + " " +majorActorLastName;
}
int Classics::getReleaseYearClassics() const{
	return yearOfRelease;
}
int Classics::getReleaseMonth() const{
	return releaseMonth;
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
	const Classics* classicsOther = dynamic_cast<const Classics*>(&other);
	return (getTitle() == classicsOther->getTitle()) &&
			(getReleaseYear() == classicsOther->getReleaseYear()) &&
			(getDirector() == classicsOther->getDirector()) &&
			(getReleaseMonth() == classicsOther->getReleaseMonth()) &&
			(getReleaseYear() == classicsOther->getReleaseYear()) &&
			(getMajorActor() == classicsOther->getMajorActor());
}
ostream& Classics::print(ostream & out) const {
	out << "C, " << stock << ", " << director << ", " << majorActorFirstName
		<< ", " << majorActorLastName << " " << title << " " << releaseMonth
		<< " " << yearOfRelease;
	return out;
}