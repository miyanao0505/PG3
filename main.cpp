#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*PFunc)(bool*);

void DispResult(bool *ans) {
	(*ans) ? printf("正解\n") : printf("不正解\n");
}

void setTimeout(PFunc p, int second, bool ans) {
	Sleep(second * 1000);

	p(&ans);
}

/// <summary>
///  奇数か偶数か
/// </summary>
/// <param name="num">値</param>
/// <returns>1:奇数, 2:偶数</returns>
int isOddOrEven(int num) {
	if (num % 2 == 1) {
		return 1;
	}
	return 2;
}

bool isMatch(int input, int value) {
	if (input == value) {
		return true;
	}
	return false;
}

int main()
{
	// 現在時刻の情報で初期化
	srand((unsigned int)time(NULL));

	int result = rand() % 6 + 1;
	int input = 0;

	printf("スタート\n");
	printf("サイコロの出目が半(奇数)か丁(偶数)か？\n");
	printf("1：奇数, 2：偶数\n");
	printf("->");
	scanf_s("%d", &input);

	PFunc p;
	p = DispResult;

	setTimeout(p, 3, isMatch(input, isOddOrEven(result)));

	return 0;
}