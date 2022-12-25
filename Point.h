#pragma once
#include "Shape.h"
class Point : public Shape
{
protected :
	int x, y;
public:
	Point();
	Point(int a, int b, string n = "Point2D", int clr = getmaxcolor());
	void setX(int a){ this->x = a; }
	void setY(int a){ this->y = a; }
	int getX() const { return x; }
	int getY() const { return y; }
	void Print () override;
	void Draw() override;

	float dist(const Point&)const;

	~Point();
};

