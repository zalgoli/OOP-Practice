#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

public:
	Rectangle(double A, double B);
	virtual ~Rectangle() = default;

	double area() const override;
	double circumference() const override;
	void display() const override;

private:
	double m_A, m_B;

};

#endif // RECTANGLE_H