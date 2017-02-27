#include "comedy.h"
using namespace std;

bool Comedy::operator<(const Comedy& rhs) {
	if (title != rhs.title) {
		return title < rhs.title;
	}
	else {
		return yearOfRelease < rhs.yearOfRelease;
	}
}

bool Comedy::operator>(const Comedy& rhs) {
	if (title != rhs.title) {
		return title > rhs.title;
	}
	else {
		return yearOfRelease > rhs.yearOfRelease;
	}
}