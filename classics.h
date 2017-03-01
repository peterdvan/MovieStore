#pragma once
#include "movie.h"
class Classics : public Movie {
public:
	Classics(string data);
	~Classics();
private:
	string majorActorFirstName = "";
	string majorActorLastName = "";
	int releaseMonth = 0;
private:
	virtual bool equalHelper(const Movie & other) const;
	virtual ostream& print(ostream&) const;
	virtual bool lessThanHelper(const Movie&);
	virtual bool greaterThanHelper(const Movie&);
};