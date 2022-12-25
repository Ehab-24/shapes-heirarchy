#pragma once
#include"Point.h"
class Point3D: public Point
{
	int z;
public:

	Point3D(int = 0, int = 0, int = 0, string n = "Point3D", int clr = getmaxcolor());

	void setZ(int);
	
	int getZ();

	void Print() override;

	void Draw() override;

	~Point3D() {}
};

