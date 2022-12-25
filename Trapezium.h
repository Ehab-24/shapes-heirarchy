#pragma once

#include "Quadrilateral.h"

class Trapezium : public Quadrilateral
{
public:

	Trapezium(Point[], string = "Trapezium", int = 0, int = EMPTY_FILL);

	~Trapezium();

private:

	float a{}, b{}, c{}, d{}, h{};


	void updateArea() override;

	void updatePerimeter() override;

	void updateLengths();
	
	void updateH();

	void Draw() override;

	void Print() override;
};

