#include <stdio.h>
#include <string.h>

template <typename T>
T Min(T a, T b) {
	return a < b ? a : b;
}

template<>
char* Min<char*>(char* a, char* b) {
	static char ans[] = "数字以外は代入できません";
	return ans;
}

int main()
{
	int x = 5, y = 8;
	float l = 1.5f, m = 3.8f;
	double i = 0.8, k = 5.8;
	char p[] = "3", q[] = "6";

	printf("%d\n", Min<int>(x, y));
	printf("%f\n", Min<float>(l, m));
	printf("%lf\n", Min<double>(i, k));
	printf("%s\n", Min<char*>(p, q));

	return 0;
}