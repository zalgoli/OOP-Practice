#include "Cube.h"
#include <iostream>

Cube::Cube(double A) : ThreeDimensionalShape(), m_A(A) {}

double Cube::volume() const {
    return m_A * m_A * m_A;
}

double Cube::surface() const {
    return m_A * m_A * 6;
}

void Cube::display() const {
    std::cout << "Cube: Surface = " << Cube::surface() << "\nVolume = " << Cube::volume() << "\n";
}
