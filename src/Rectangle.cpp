#include "Rectangle.h"


Rectangle::Rectangle(double l, double w) : length(l), width(w) {}


double Rectangle::getArea() const {
    return length * width;
}


void Rectangle::display() const {
    std::cout << "Rectangle with length: " << length << " and width: " << width << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
}