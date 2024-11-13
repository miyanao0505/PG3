#include <stdio.h>
#include "script/Language.h"
#include "script/Japanese.h"
#include "script/English.h"

int main()
{
	Language* human[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			human[i] = new Japanese;
		else
			human[i] = new English;
	}

	for (int i = 0; i < 2; i++) {
		human[i]->Speak();
	}

	for (int i = 0; i < 2; i++) {
		delete human[i];
	}

	return 0;
}