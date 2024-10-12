#include <stdio.h>
#include <string.h>

int func(int n) {
	if (n <= 0) {
		return 0;
	}
	if (n == 1) {
		return 100;
	}

	return func(n - 1) + func(n - 1) * 2 - 50;
}

int main()
{
	int num = 0;
	int ans = 0;
	int in = 0;

	while (true) {
		printf("働いた時間:");
		scanf_s("%d", &num);

		ans = func(num);

		printf("\n");
		printf("一般的な賃金体系 : %d円\n", 1072 * num);
		printf("再帰的な賃金体系 : %d円\n\n", ans);

		printf("続ける : 1, 終わる : 2\n");
		printf("選択->");
		scanf_s("%d", &in);

		if (in == 2) {
			break;
		}
	} 


	return 0;
}