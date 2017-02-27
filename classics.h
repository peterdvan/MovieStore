#pragma once
#include "movie.h"
class Classics : public Movie {
	 bool operator<(const Classics&);
	 bool operator>(const Classics&);
private:
	string majorActor;
};