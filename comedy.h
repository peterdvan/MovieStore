#pragma once
#include "movie.h"
class Comedy : public Movie {
	bool operator<(const Comedy&);
	bool operator>(const Comedy&);
public:
	

};
