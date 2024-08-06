#pragma once

class Shape {
public:

	virtual double getArea() const = 0;

	virtual void display() const = 0;

	virtual ~Shape() {}
};