#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {

public:
	Square(double A);
	virtual ~Square() = default;

	double area() const override;
	double circumference() const override;
	void display() const override;

private:
	double m_A;

};

#endif // SQUARE_H