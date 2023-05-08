#include "Circle.h"
#include <cmath>
#include <iostream>

const double PI = 3.14159265358979323846;

Circle::Circle(double radius) : m_radius(radius) {}

double Circle::circumference() const {
	return 2 * PI * m_radius;
}

double Circle::area() const {
	return PI * m_radius * m_radius;
}

void Circle::display() const {
	std::cout << "Circle: radius = " << m_radius << ",\nArea = " << Circle::area() << "\nCircumference = " << Circle::circumference() << "\n";
}