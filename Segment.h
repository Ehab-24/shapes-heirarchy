#pragma once
#include "OneDShape.h"

class Segment :public OneDShape
{
public:
	Segment(string n, Point Ps[], int color = getmaxcolor());

	~Segment();
	
	void Print();

	void Draw();

private:

	void updateSlope();

	void updateLength();

	float getLength();

	float getSlope() const;

	float length;
};

