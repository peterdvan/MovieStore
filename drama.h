#pragma once
#include "movie.h"
class Drama : public Movie {
public:
	Drama(string data);
	~Drama();
private:
	virtual bool equalHelper(const Movie & other) const;
	virtual ostream& print(ostream&) const;
	virtual bool lessThanHelper(const Movie&);
	virtual bool greaterThanHelper(const Movie&);
};