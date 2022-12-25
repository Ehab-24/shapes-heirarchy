#include "Circle.h"

#define pi 3.1415926535

Circle::Circle(string s, Point p, int r, int clr, int style) 
	:TwoDShape(s, clr, style), Center(p), rad(r) 
{
	this->updateArea();
	this->updateDiameter();
	this->updatePerimeter();
}

void Circle::Draw()
{
	setfillstyle(this->fillstyle, this->color);
	setcolor(this->color);
	fillellipse(Center.getX(), Center.getY(), this->rad, this->rad);
}

void Circle::Print()
{
	TwoDShape::Print();
	cout << char(249) << " Center: ";	Center.Print();
	cout << char(249) << " Radius: " << this->rad;
	cout << char(249) << " Diameter: " << this->diameter;
}

void Circle::updateArea() { this->area = pow(pi * (this->rad), 2); }
//float Circle::getArea()const { return this->area; }

void Circle::updatePerimeter() { this->perimeter = 2 * pi * (this->rad); }
//float Circle::getPerimeter()const { return this->perimeter; }

void Circle::updateDiameter() { this->diameter = 2 * (this->rad); }
int Circle::getDiameter()const { return this->diameter; }


Circle::~Circle() {}
