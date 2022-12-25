#pragma once

#include"Quadrilateral.h"

class Parallelogram:public Quadrilateral
{
public:
	Parallelogram(Point[], string = "Quadrilateral", int = 0, int = EMPTY_FILL);

	~Parallelogram() {}

private:

	float lh{}, lv{};
	float height{};

	void updateLengths();

	void updateHeight();

	void updatePerimeter() override;

	void updateArea()override;

	void Print()override;

	void Draw()override;
};

