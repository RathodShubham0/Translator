#pragma once
#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <vector>
#include "Triangle.h"

class Writer {
public:
    Writer();
    ~Writer();

    // Function to write triangles to a .dat file
    void writeToFile(const std::string& filename, const std::vector<Triangle>& triangles) const;
};

#endif // WRITER_H
