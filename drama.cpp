#include "drama.h"
bool Drama::operator<(const Drama& rhs) {
	if (director != rhs.director) {
		return director < rhs.director;
	}
	else {
		return title < rhs.title;
	}
}
bool Drama::operator>(const Drama&rhs) {
	if (director != rhs.director) {
		return director > rhs.director;
	}
	else {
		return title > rhs.title;
	}
}