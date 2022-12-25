#include "Square.h"


Square::Square(Point Ps[], string n, int clr, int style) 
	: Quadrilateral(Ps, n, clr, style) 
{ 
	this->updateLength();
	this->updateArea();
	this->updatePerimeter();
}

void Square::updateLength() { this->length = this->Ps[0].dist(this->Ps[1]); }

float Square::getLength() { return this->length; }

void Square::updateArea() { this->area = this->length * this->length; }

void Square::updatePerimeter() { this->perimeter = this->length * 4; }

void Square::Print()
{
	Quadrilateral::Print();
	cout << char(249) << " Length of each side: " << this->length << " units";
}

void Square::Draw()
{
	setfillstyle(this->fillstyle, this->color);
	setcolor(this->color);
	bar3d(this->getMinx(), this->getMiny(), this->getMaxx(), this->getMaxy(), 0, false);

	Quadrilateral::drawDiagonals();
}