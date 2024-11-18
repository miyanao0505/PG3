#include <stdio.h>
#include <list>
#include <string>

using namespace std;

int main()
{
	// ‰Šú‰»(1970”N‚ÌRèü‰wˆê——)
	list<string> yamanoteLine{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo",
		"Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin - Okubo",
		"Shinjuku", "Yoyogi", "Harajiku", "Shibuya", "Ebisu",
		"Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi",
		"Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970”N‚Ì•`‰æ
	printf("Rèü(1970”N)‚Ì‰wˆê——\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		printf("%20s", *itr);
		
	}

	return 0;
}