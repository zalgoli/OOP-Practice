#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape {

public:
    Cube(double A);
    virtual ~Cube() = default;

    double volume() const override;
    double surface() const override;
    void display() const override;

private:
    double m_A;
};

#endif //CUBE_H
