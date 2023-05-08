#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double radius);
	virtual ~Circle() = default;

	// Function to calculate circumference
	double circumference() const;

	// Function to calculate area, overriding base class area function
	double area() const override;

	// Function to display circle properties, overriding base class display function
	void display() const override;

private:
	double m_radius;
};

#endif // CIRCLE_H