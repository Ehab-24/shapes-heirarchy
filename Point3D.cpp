#include "Point3D.h"

Point3D::Point3D(int a, int b, int c, string n, int clr)
	: Point(a, b, n, clr), z(c) {}

void Point3D::setZ(int a) { this->z = a; }

int Point3D::getZ() { return this->z; }

void Point3D::Print()
{
	Shape::Print();
	cout << "(" << this->x << ", " << this->y << ", " << this->z << ")";
}

void Point3D::Draw() { putpixel(this->x, this->y, this->color); }