#include "Line.h"


void Line::Draw()
{
	setcolor(this->color);
	line(this->P[0].getX(), this->P[0].getY(), this->P[1].getX(), this->P[1].getY());
}

void Line::Print() { OneDShape::Print(); }


void Line::updateSlope() { this->slope = this->Slope(); }

float Line::getSlope() const { return this->slope; };