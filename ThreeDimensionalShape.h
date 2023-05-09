#ifndef THREE_DIMENSIONAL_SHAPE_H
#define THREE_DIMENSIONAL_SHAPE_H

#include "Shape.h"

class ThreeDimensionalShape : public Shape {
public:
    virtual ~ThreeDimensionalShape() = default;

    virtual double volume() const = 0;
    virtual double surface() const = 0;

    double area() const override { return 0.0; }
    double circumference() const override { return 0.0; }

protected:
    ThreeDimensionalShape() : Shape() {}
};

#endif // THREE_DIMENSIONAL_SHAPE_H
