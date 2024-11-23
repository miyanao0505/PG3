#include <stdio.h>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// 初期化(1970年の山手線駅一覧)
	list<string> yamanoteLine{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo",
		"Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin - Okubo",
		"Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu",
		"Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi",
		"Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970年の描画
	printf("山手線(1970年)の駅一覧\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		cout << *itr << endl;
	}
	printf("\n");

	// 1971年開業
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	// 2019年の描画
	printf("山手線(2019年)の駅一覧\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		cout << *itr << endl;
	}
	printf("\n");

	// 1971年開業
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	// 2019年の描画
	printf("山手線(2022年)の駅一覧\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		cout << *itr << endl;
	}

	return 0;
}