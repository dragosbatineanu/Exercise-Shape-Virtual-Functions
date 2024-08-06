#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);


    Shape* shapes[2];
    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->getArea() << endl;
    }

    return 0;
}