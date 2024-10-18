#pragma once
#ifndef READER_H
#define READER_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Point.h"
#include "Triangle.h"

class Reader {
private:
    std::vector<Point> uniquePoints;  // Store unique points
    std::unordered_map<std::string, int> pointIndexMap;  // Map to track point indices
    std::vector<Triangle> triangles; // Store triangles

    // Helper function to convert a point to a string for map lookup
    std::string pointToString(const Point& pt) const;

public:
    Reader();
    ~Reader();

    // Function to read points and triangles from an STL file
    void readSTL(const std::string& filename);

    // Retrieve triangles from the parsed data
    std::vector<Triangle> getTriangles() const;
};

#endif // READER_H
