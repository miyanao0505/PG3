#include "circle.h"
#include <stdio.h>
#include <cmath>

void circle::Size()
{
	area = radius * radius * 3.14f;
}

void circle::Draw()
{
	printf("circle is %f\n\n", area);
}
