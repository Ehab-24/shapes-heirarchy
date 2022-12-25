#include "Point.h"


Point::Point() : Shape("", 0), x(0), y(0) {}

Point::Point(int a, int b, string n, int clr) :Shape(n, clr) { this->x = a, this->y = b; }

void Point::Print()
{
	Shape::Print();
	cout << "(" << this->x << "," << this->y << ")" << endl; 
}

void Point::Draw()	{ putpixel(this->x, this->y, this->color); }

float Point::dist(const Point& P)const 
{
	float x = P.x - this->x;
	float y = P.y - this->y;

	return pow(pow(x, 2) + pow(y, 2), 0.5);
}

Point::~Point() {}
