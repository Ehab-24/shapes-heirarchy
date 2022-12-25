#pragma once

#include "Shape.h"

class TwoDShape : public Shape
{
public:
	TwoDShape(string n, int clr, int style) 
		:Shape(n, clr), fillstyle(style) {}

	~TwoDShape() {}

protected:

	int fillstyle{};

	float area{};
	float perimeter{};

	float getArea() const;
	float getPerimeter() const;

	virtual void updateArea() {}
	virtual void updatePerimeter() {}

	virtual void Print()override;
};

