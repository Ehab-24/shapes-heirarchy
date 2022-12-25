#include<string>
#include<iostream>
using namespace std;

#include "graphics.h"

#pragma once
class Shape
{
protected:
	string name{};
	int color{};
public:
	//Shape() {}
	Shape(string, int = getmaxcolor());
	virtual void Draw()=0;
	virtual void Print();

	virtual ~Shape();
};