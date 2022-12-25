#pragma once
#include "Shape.h"
#include "Point.h"
class OneDShape : public Shape
{
public:
	
	float Slope() const;

protected:
	float slope{};
	Point P[2];

	static void arrowHead(int,int);

	OneDShape(string n, Point Ps[], int clr = getmaxcolor());
	
	void Print();
	
	void Draw();

	float YIntercept();

	void printEquation();

	virtual ~OneDShape();
};

