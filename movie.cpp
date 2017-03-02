#include "movie.h"
string Movie::getDirector() const{
    return director;
}
int Movie::getReleaseYear() const{
    return yearOfRelease;
}
string Movie::getTitle() const{
    return title;
}
int Movie::getStock() const{
    return stock;
}
bool Movie::operator>(const Movie &other) {
    this->greaterThanHelper(other);
}
bool Movie::operator<(const Movie &other) {
    this->lessThanHelper(other);
}
bool Movie::operator==(const Movie &other) {
    this->equalHelper(other);
}