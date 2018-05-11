#include <cmath>
#include "Point.h"

Point::Point(double a, double b) : x(a), y(b) {}
Point::Point() : x(0), y(0) {}

Point Point::operator+(const Point& p2) const {
    return Point(x + p2.x, y + p2.y);
}

Point Point::operator-(const Point& p2) const {
    return Point(x - p2.x, y - p2.y);
}

Point Point::operator*(double c) const {
    return Point(c*x, c*y);
}

double Point::operator*(const Point& p2) const {
    return x*p2.x + y*p2.y;
}

double Point::length() const {
    return std::sqrt(x*x + y*y);
}

double Point::length2() const {
    return x*x + y*y;
}
