#pragma once
#include "movie.h"
class Comedy : public Movie {
public:
	Comedy(string data);
    ~Comedy();
private:
	virtual bool equalHelper(const Movie & other) const;
    virtual ostream& print(ostream&) const;
    virtual bool lessThanHelper(const Movie&);
    virtual bool greaterThanHelper(const Movie&);
};
