#pragma once
#include "movie.h"
class Drama : public Movie {
	 bool operator<(const Drama&);
	 bool operator>(const Drama&);
};