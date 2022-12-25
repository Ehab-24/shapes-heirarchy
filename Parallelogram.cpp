#include "Parallelogram.h"

Parallelogram::Parallelogram(Point Ps[], string n, int clr, int style) :
	Quadrilateral(Ps, n, clr, style), lh(0), lv(0), height(0)
{
	this->updateHeight();
	this->updateLengths();
	this->updateArea();
	this->updatePerimeter();
}

void Parallelogram::updateLengths()
{
	for (int i = 1; i < 4; i++)
		if (this->Ps[0].getY() == this->Ps[i].getY())
		{
			this->lh = Ps[0].dist(Ps[i]);
			return;
		}
	for (int i = 1; i < 4; i++)
		if (this->Ps[0].getX() == this->Ps[i].getX())
		{
			this->lv = Ps[0].dist(Ps[i]);
			return;
		}
}

void Parallelogram::updateHeight()
{
	int opPoints[4];

	this->oppositePoints(opPoints);

	Point heightPoint = { this->Ps[opPoints[0]].getX(), this->Ps[opPoints[1]].getY()};

	this->height = this->Ps[0].dist(heightPoint);
}

void Parallelogram::updateArea()
{
	this->area = this->lh * this->height;
}

void Parallelogram::updatePerimeter()
{
	this->perimeter = (2 * this->lh) + (2 * this->lv);
}

void Parallelogram::Draw()
{
	setfillstyle(this->fillstyle, this->color);
	setcolor(this->color);

	int Points[] = { Ps[0].getX(), Ps[0].getY(), Ps[2].getX(), Ps[2].getY(), 
		Ps[3].getX(), Ps[3].getY(), Ps[1].getX(), Ps[1].getY() };
	fillpoly(4, Points);
	Quadrilateral::drawDiagonals();
}

void Parallelogram::Print()
{
	Quadrilateral::Print();
	cout << char(249) << " Horizontal Length: " << this->lh << " units" << endl;
	cout << char(249) << " Vertical Length: " << this->lv << " units" << endl;
	cout << char(249) << " Height of both sides: " << this->height << " units";
}