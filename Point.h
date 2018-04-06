#pragma once

struct Point {
    Point(double a, double b);
    Point();
    Point operator+(const Point& p2) const;
    Point operator-(const Point& p2) const;
    Point operator*(double c) const;
    double operator*(const Point& p2) const;
    double length() const;
    double length2() const;
    double x;
    double y;
};
