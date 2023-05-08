#ifndef SHAPE_H
#define SHAPE_H

class Shape {

public:
    virtual ~Shape() = default; // Virtual destructor
    virtual double area() const = 0; // Pure virtual function for area calculation
    virtual void display() const = 0; // Pure virtual function for displaying shape properties
    virtual double circumference() const = 0;
};

#endif // SHAPE_H