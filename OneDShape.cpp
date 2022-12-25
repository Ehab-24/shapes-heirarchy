#include "OneDShape.h"



void OneDShape::arrowHead(int x, int y)
{
	circle(x, y, 2);
}


OneDShape::OneDShape(string n, Point Ps[], int clr) :Shape(n, clr)
{
	P[0] = Ps[0];
	P[1] = Ps[1];
}

void OneDShape::Print()
{
	Shape::Print();

	cout << char(249) << " P1: ";	P[0].Print();
	cout << char(249) << " P2: ";	P[1].Print();
	cout << endl << char(249) << " Slope: " << slope << endl;
	cout << char(249) << " Y-intercept: " << YIntercept() << endl;
	cout << char(249) << " Equation: ";	printEquation();
}
void OneDShape::Draw()
{
	Shape::Draw();
}

float OneDShape::Slope() const
{
	float m = this->P[0].getY() - this->P[1].getY();
	m /= (this->P[0].getX() - this->P[1].getX());

	return m;
}

float OneDShape::YIntercept()
	{ return this->P[0].getY() - (this->slope * this->P[0].getX()); }

void OneDShape::printEquation()
{
	cout << "y = " << this->slope << "x + " << YIntercept();
}

OneDShape::~OneDShape() {}