#include "Point.h"
#include <iostream>

// Default constructor
Point::Point() : x(0.0), y(0.0), z(0.0) {}

// Parameterized constructor
Point::Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

// Destructor
Point::~Point() {}

// Getters
double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

// Print the point's coordinates
void Point::print() const {
    std::cout << "Point(" << x << ", " << y << ", " << z << ")";
}
