#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
	return 3.14 * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle with radius: " << radius << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
}