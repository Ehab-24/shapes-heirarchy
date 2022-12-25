#include "Ray.h"

void Ray::Draw()
{
	setcolor(this->color);
	OneDShape::arrowHead(this->P[0].getX(), this->P[0].getY());
	line(this->P[0].getX(), this->P[0].getY(), this->P[1].getX(), this->P[1].getY());
}

void Ray::Print() { OneDShape::Print(); }


void Ray::updateSlope() { this->slope = this->Slope(); }

float Ray::getSlope() const { return this->slope; };