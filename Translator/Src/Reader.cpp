#include "Reader.h"
#include <fstream>
#include <sstream>
#include <iostream>

Reader::Reader() {}

Reader::~Reader() {}

// Convert a point to a string for map lookup (e.g., "x,y,z")
std::string Reader::pointToString(const Point& pt) const {
    std::ostringstream oss;
    oss << pt.getX() << "," << pt.getY() << "," << pt.getZ();
    return oss.str();
}

// Function to read points and triangles from an STL file
void Reader::readSTL(const std::string& filename) {
    std::ifstream file(filename);

    // Error handling: Check if the file was successfully opened
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string line;
    Point vertices[3];  // Temporarily store vertices for each triangle
    int vertexCount = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;

        if (line.find("vertex") != std::string::npos) {
            double x, y, z;
            iss >> word >> x >> y >> z;

            Point pt(x, y, z);
            std::string ptStr = pointToString(pt);

            // Check if the point is unique
            if (pointIndexMap.find(ptStr) == pointIndexMap.end()) {
                uniquePoints.push_back(pt);
                pointIndexMap[ptStr] = uniquePoints.size() - 1;  // Store the index
            }

            vertices[vertexCount++] = pt;

            // Once 3 vertices are read, form a triangle
            if (vertexCount == 3) {
                Triangle tri(vertices[0], vertices[1], vertices[2]);
                triangles.push_back(tri);
                vertexCount = 0;  // Reset vertex count
            }
        }
    }

    file.close();
}

// Function to return parsed triangles
std::vector<Triangle> Reader::getTriangles() const {
    return triangles;
}
