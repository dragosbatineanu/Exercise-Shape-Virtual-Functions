#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle : public Shape {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w);


    double getArea() const override;


    void display() const;
};
