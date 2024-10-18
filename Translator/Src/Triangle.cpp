#include "Triangle.h"
#include <iostream>

// Constructor to initialize triangle with three points
Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : vertex1(v1), vertex2(v2), vertex3(v3) {}

// Destructor
Triangle::~Triangle() {}

// Print function to display the triangle's vertices
void Triangle::print() const {
    std::cout << "Triangle:\n";
    vertex1.print();
    std::cout << "\n";
    vertex2.print();
    std::cout << "\n";
    vertex3.print();
    std::cout << "\n";
}

// Write function to write the triangle's vertices into a file
void Triangle::write(std::ofstream& ofs) const {
  
    ofs   << vertex1.getX() << ", " << vertex1.getY() << ", " << vertex1.getZ() << "\n";
    ofs  << vertex2.getX() << ", " << vertex2.getY() << ", " << vertex2.getZ() << "\n";
    ofs   << vertex3.getX() << ", " << vertex3.getY() << ", " << vertex3.getZ() << "\n";
}
