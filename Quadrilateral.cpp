#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(Point*Ps, string n, int clr, int style) 
	: TwoDShape(n, clr, style), Ps(Ps)  { this->updateLenOfDiag(); }

void Quadrilateral::oppositePoints(int ans[])const
{
	int d1, d2, d3;		//Distances of P1 from P2, P3 & P4.

	d1 = this->Ps[0].dist(this->Ps[1]);

	d2 = this->Ps[0].dist(this->Ps[2]);

	d3 = this->Ps[0].dist(this->Ps[3]);

	if ((d1 > d2) && (d1 > d3))
		ans[0] = 0, ans[1] = 1, ans[2] = 2, ans[3] = 3;
	else if ((d2 > d1) && (d2 > d3))
		ans[0] = 0, ans[1] = 2, ans[2] = 1, ans[3] = 3;
	else
		ans[0] = 0, ans[1] = 3, ans[2] = 1, ans[3] = 2;
}

void Quadrilateral::updateLenOfDiag()
{
	float d1, d2, d3;		//Distances of P1 from P2, P3 & P4.

	d1 = this->Ps[0].dist(this->Ps[1]);

	d2 = this->Ps[0].dist(this->Ps[2]);

	d3 = this->Ps[0].dist(this->Ps[3]);

	if ((d1 > d2) && (d1 > d3))
		this->lengthOfDiagonals = d1;
	else if ((d2 > d1) && (d2 > d3))
		this->lengthOfDiagonals = d2;
	else
		this->lengthOfDiagonals = d3;
}

void Quadrilateral::drawDiagonals()const
{
	int opPoints[4]{};

	this->oppositePoints(opPoints);

	setcolor(this->color);
	line(this->Ps[opPoints[0]].getX(), this->Ps[opPoints[0]].getY(), this->Ps[opPoints[1]].getX(), this->Ps[opPoints[1]].getY());
	line(this->Ps[opPoints[2]].getX(), this->Ps[opPoints[2]].getY(), this->Ps[opPoints[3]].getX(), this->Ps[opPoints[3]].getY());
}

void Quadrilateral::Draw()
{
	this->drawDiagonals();
}

void Quadrilateral::Print()
{
	TwoDShape::Print();
	cout << endl;
	for (int i = 0; i < 4; i++)
		cout << char(249) << " P" << i + 1 << ": ", Ps[i].Print();
	cout << endl;
	cout << char(249) << " Length of both diagonals: " << this->lengthOfDiagonals << " units" << endl;
}

int Quadrilateral::getMaxx()const
{
	int maxx = this->Ps[0].getX();

	for (int i = 1; i < 4; i++)
		if (this->Ps[i].getX() > maxx)
			maxx = Ps[i].getX();
	return maxx;
}
int Quadrilateral::getMinx()const
{
	int minx = this->Ps[0].getX();

	for (int i = 1; i < 4; i++)
		if (this->Ps[i].getX() < minx)
			minx = Ps[i].getX();
	return minx;
}

int Quadrilateral::getMaxy()const
{
	int maxy = this->Ps[0].getY();

	for (int i = 1; i < 4; i++)
		if (this->Ps[i].getY() > maxy)
			maxy = Ps[i].getY();
	return maxy;
}
int Quadrilateral::getMiny()const
{
	int miny = this->Ps[0].getY();

	for (int i = 1; i < 4; i++)
		if (this->Ps[i].getY() < miny)
			miny = Ps[i].getY();
	return miny;
}