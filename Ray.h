#pragma once

#include "OneDShape.h"

class Ray : public OneDShape
{
public:

	Ray(string n, Point P[], int clr) :OneDShape(n, P, clr) 
		{ this->updateSlope(); }

	~Ray() {}

	void Print();

	void Draw();

private:
	void updateSlope();

	float getSlope() const;
};

