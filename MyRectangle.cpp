#include "MyRectangle.h"


MyRectangle::MyRectangle(Point Ps[], string n, int clr, int style) :Quadrilateral(Ps, n, clr, style)
{
	this->updateHeight();
	this->updateLength();
	this->updateArea();
	this->updatePerimeter();
}

void MyRectangle::updateLength()
{
	for (int i = 1; i < 4; i++)
		if (this->Ps[0].getY() == this->Ps[i].getY())
		{
			this->length = Ps[0].dist(Ps[i]);
			return;
		}
}

void MyRectangle::updateHeight()
{
	for (int i = 1; i < 4; i++)
		if (this->Ps[0].getX() == this->Ps[i].getX())
		{
			this->height = Ps[0].dist(Ps[i]);
			return;
		}
}

void MyRectangle::updateArea()
{
	this->area = this->length * this->height;
}

void MyRectangle::updatePerimeter() { this->perimeter = (this->length * 2) + (this->height * 2); }

void MyRectangle::Draw()
{
	setfillstyle(this->fillstyle, this->color);
	setcolor(this->color);
	bar3d(this->getMinx(), this->getMiny(), this->getMaxx(), this->getMaxy(), 0, false);
	setcolor(COLOR(255, 0, 0));
	Quadrilateral::drawDiagonals();
}

void MyRectangle::Print()
{
	Quadrilateral::Print();
	cout << char(249) << " Length of both sides: " << this->length << " units" << endl;
	cout << char(249) << " Height of both sides: " << this->height << " units";
}