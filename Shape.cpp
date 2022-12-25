#include "Shape.h"


Shape::Shape(string n, int clr) :name(n), color(clr) {}

void Shape::Print()
{
	cout << this->name << endl;
}
void Shape::Draw()
{
	// Does nothing....
}

Shape::~Shape()
{
}
