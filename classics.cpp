#include "classics.h"

bool Classics::operator<(const Classics&rhs) {
	if (yearOfRelease != rhs.yearOfRelease) {
		return yearOfRelease < rhs.yearOfRelease;
	}
	else {
		return majorActor < rhs.majorActor;
	}
}
bool Classics::operator>(const Classics&rhs) {
	if (yearOfRelease != rhs.yearOfRelease) {
		return yearOfRelease > rhs.yearOfRelease;
	}
	else {
		return majorActor > rhs.majorActor;
	}
}