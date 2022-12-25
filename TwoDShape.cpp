#include "TwoDShape.h"

float TwoDShape::getArea() const { return this->area; }

float TwoDShape::getPerimeter() const { return this->perimeter; }

void TwoDShape::Print()
{
	Shape::Print();
	cout << endl;
	cout << char(249) << " Area: " << this->area << " unit" << char(253) << endl;
	cout << char(249) << " Perimeter: " << this->perimeter << " units" << endl;
}