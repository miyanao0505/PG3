#pragma once
#include "IShape.h"

class circle : public IShape
{
public:
	void Size() override;
	void Draw() override;

private:
	float radius = 4;
	float area;
};

