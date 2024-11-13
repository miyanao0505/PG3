#pragma once
#include "Language.h"

class English :public Language
{
public:
	English();
	~English() override;
	void Speak() override;
};

