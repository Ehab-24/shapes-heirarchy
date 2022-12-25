#pragma once
#include "TwoDShape.h"
#include "Point.h"

class Circle final :public TwoDShape
{
	Point Center;
	int rad;

public:
	Circle(string s, Point p, int r, int = getmaxcolor(), int = 0);
	
	void Draw() override;
	
	void Print()override;

	~Circle();

private:
	int diameter;

	int getDiameter()const;
	void updateDiameter();

	void updateArea() override;
	//float getArea()const;

	void updatePerimeter()override;
	//float getPerimeter()const override;
};