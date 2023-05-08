#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double A, double B) : m_A(A), m_B(B) {}

double Rectangle::area() const {
	return m_A * m_B;
}

double Rectangle::circumference() const {
	return 2 * m_A + 2 * m_B;
}

void Rectangle::display() const {
	std::cout << "Rectangle: area = " << Rectangle::area() << ",\nCircumference = " << Rectangle::circumference() <<"\n";
}