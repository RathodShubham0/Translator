#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y, z; // Store x, y, z coordinates as doubles

public:
    // Constructors and Destructor
    Point();  // Default constructor
    Point(double xVal, double yVal, double zVal);  // Parameterized constructor
    ~Point();  // Destructor

    // Getters
    double getX() const;
    double getY() const;
    double getZ() const;

    // Print function for displaying point values
    void print() const;
};

#endif // POINT_H
