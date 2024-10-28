#include <stdio.h>
#include "script/Enemy.h"

int main()
{
	Enemy enemy;

	enemy.Initialize();

	enemy.Update();
	enemy.Update();
	enemy.Update();

	return 0;
}