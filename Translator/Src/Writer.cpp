#include "Writer.h"
#include <fstream>
#include <iostream>

Writer::Writer() {}

Writer::~Writer() {}

// Function to write triangles to a .dat file
void Writer::writeToFile(const std::string& filename, const std::vector<Triangle>& triangles) const {
    std::ofstream file(filename);

    // Error handling: Check if the file was successfully opened
    if (!file.is_open()) {
        std::cerr << "Unable to open output file: " << filename << std::endl;
        return;
    }

    // Write each triangle to the file using the write() function of Triangle
    for (const Triangle& triangle : triangles) {
        triangle.write(file);  // Print each triangle to the file stream
    }

    file.close();
}
