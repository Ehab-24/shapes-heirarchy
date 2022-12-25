#include "Segment.h"


Segment::Segment(string n, Point Ps[], int clr) 
	:OneDShape(n, Ps, clr) 
{ 
	this->updateSlope();
	this->updateLength();
}

void Segment::Print() 
{
	OneDShape::Print();
	cout << endl << char(249) << " Length: " << this->length;
}

void Segment::Draw()
{
	setcolor(this->color);
	OneDShape::arrowHead(this->P[0].getX(), this->P[0].getY());
	line(this->P[0].getX(), this->P[0].getY(), this->P[1].getX(), this->P[1].getY());
	OneDShape::arrowHead(this->P[1].getX(), this->P[1].getY());
}

void Segment::updateSlope() { this->slope = this->Slope(); }

float Segment::getSlope()const { return this->slope; }

void Segment::updateLength() { this->length = P[0].dist(P[1]); }

float Segment::getLength() { return this->length; }

Segment::~Segment() {}
