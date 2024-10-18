#include <iostream>
#include "Reader.h"
#include "Writer.h"

int main() {
    // Create a Reader object to read the .stl file
    Reader reader;
    std::string filename = "Sphere.stl";

    // Read the .stl file
    std::cout << "Reading file: " << filename << std::endl;
    reader.readSTL(filename);

    // Get triangles from the reader
    std::vector<Triangle> triangles = reader.getTriangles();

    // Handle case if no triangles were read
    if (triangles.empty()) {
        std::cerr << "Error: No triangles were read from the STL file!" << std::endl;
        return 1;
    }

    // Create a Writer object to write to the .dat file
    Writer writer;
    writer.writeToFile("output.dat", triangles);

    std::cout << "STL file processed and saved to output.dat!" << std::endl;
    return 0;
}
