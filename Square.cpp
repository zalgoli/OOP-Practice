#include "Square.h"
#include <iostream>

Square::Square(double A) : Rectangle(A, A), m_A(A) {}

double Square::area() const {
	return m_A * m_A;
}

double Square::circumference() const {
	return m_A * 4;
}

void Square::display() const {
	std::cout << "Square: area = " << Square::area() << ",\nCircumference = " << Square::circumference() << "\n";
}