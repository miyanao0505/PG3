#include <stdio.h>
#include "script/IShape.h"
#include "script/circle.h"
#include "script/Rectangle.h"

int main()
{
	IShape* shape[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			shape[i] = new circle;
		else
			shape[i] = new Rectangle;
	}

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}