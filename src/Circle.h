#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>

class Circle : public Shape
{
private:
	double radius;

public:
	Circle(double r);

	double getArea() const override;

	void display() const;
};

