#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Cube.h"

int main()
{
    std::cout << "Choose what kind of shape you would like to calculate:\n1. Circle\n2. Rectangle\n3. Square\n4. Cube";
    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1: {
        std::cout << "Provide the radius of the circle and I'll display its area and circumference : \n";
        double radius;
        std::cin >> radius;
        Circle myCircle = Circle(radius);
        myCircle.display();
        break;
    }
    case 2: {
        std::cout << "Provide the values for side A and side B of a rectangle and I'll do the same: \n";
        double A, B;
        std::cin >> A;
        std::cin >> B;
        Rectangle myRectangle = Rectangle(A, B);
        myRectangle.display();
        break;
    }
    case 3: {
        std::cout << "And now for the square! Give me the side length: \n";
        double A;
        std::cin >> A;
        Square mySquare = Square(A);
        mySquare.display();
        break;
    }
    case 4: {
        std::cout << "Provide the length of an individual edge to calculate the cube: \n";
        double A;
        std::cin >> A;
        Cube myCube = Cube(A);
        myCube.display();
        break;
    }
    }
    return 0;
}