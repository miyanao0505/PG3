#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	float width = 5;
	float height = 6;
	float area;
};

