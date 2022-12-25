#pragma once

#include"Quadrilateral.h"

class Square final : public Quadrilateral
{
private:
	float length{};

public:
	Square(Point[], string = "Square", int = 0, int = EMPTY_FILL);

	void updateLength();
	float getLength();

	void updatePerimeter() override;

	void updateArea()override;

	void Print()override;

	void Draw()override;

	~Square() {}


};

