#pragma once
#include "OneDShape.h"

class Line : public OneDShape
{
public:

	Line(string n, Point P[], int clr) :OneDShape(n, P, clr)
	{
		this->updateSlope();
	}

	~Line() {}

	void Print();

	void Draw();

private:
	void updateSlope();

	float getSlope() const;
};

