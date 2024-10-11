#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include <fstream>

class Triangle {
private:
    Point vertex1, vertex2, vertex3;  // Three vertices of the triangle

public:
    // Constructor and Destructor
    Triangle(const Point& v1, const Point& v2, const Point& v3);
    ~Triangle();

    // Print function to display the triangle's vertices
    void print() const;

    // Write function to write the triangle's vertices into a file stream
    void write(std::ofstream& ofs) const;
};

#endif // TRIANGLE_H
