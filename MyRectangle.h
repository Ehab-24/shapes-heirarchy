#pragma once

#include"Quadrilateral.h"

class MyRectangle:public Quadrilateral
{
private:
	float length;
	float height;

	void updateLength();

	void updateHeight();

	void updateArea()override;

	void updatePerimeter()override;

	void Draw()override;

	void Print()override;

public:
	
	MyRectangle(Point[], string = "Rectangle", int = 0, int = 0);

	~MyRectangle() {}
};

