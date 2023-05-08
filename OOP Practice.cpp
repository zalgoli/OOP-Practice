#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main()
{
    std::cout << "Provide the radius of the circle and I'll display its area and circumference : \n";
    double radius;
    std::cin >> radius;

    Circle myCircle = Circle(radius);
    myCircle.display();


    std::cout << "Provide the values for side A and side B of a rectangle and I'll do the same: \n";
    double A, B;
    std::cin >> A;
    std::cin >> B;

    Rectangle myRectangle = Rectangle(A, B);
    myRectangle.display();

    std::cout << "And now for the square! Give me the side length: \n";
    double squareside;
    std::cin >> squareside;

    Square mySquare = Square(squareside);
    mySquare.display();
    
    return 0;
}