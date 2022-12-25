#pragma once

#include"TwoDShape.h"
#include"Point.h"


class Quadrilateral : public TwoDShape
{
protected:

	Point* Ps{ nullptr };
	Point intersectionOfDiagonals;
	float lengthOfDiagonals;


	virtual void updateArea() {}
	virtual void updatePerimeter() {}
	
	void oppositePoints(int[])const;

	void updateLenOfDiag();
	//float getLenOfDiag();

	void drawDiagonals()const;

	int getMaxx()const;
	int getMinx()const;

	int getMaxy()const;
	int getMiny()const;

	virtual void Draw()override;
	virtual void Print()override;

public:

	Quadrilateral(Point*, string, int, int);

	virtual ~Quadrilateral() {}
};

