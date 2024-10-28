#include <stdio.h>
#include "script/MyTools.h"

int main()
{
	MyTools<int, int> ans1(5, 8);
	MyTools<float, float> ans2(1.5f, 1.8f);
	MyTools<double, double> ans3(2.5, 3.8);
	MyTools<int, float> ans4(4, 7.8f);
	MyTools<int, double> ans5(5, 6.8);
	MyTools<float, double> ans6(3.4f, 4.2);

	printf("int, int : %d\n", ans1.Min());
	printf("float, float : %f\n", ans2.Min());
	printf("double, double : %f\n", ans3.Min());
	printf("int, float : %d\n", ans4.Min());
	printf("int, double : %d\n", ans5.Min());
	printf("float, double : %f\n", ans6.Min());

	return 0;
}