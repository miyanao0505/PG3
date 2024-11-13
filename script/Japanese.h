#pragma once
#include "Language.h"

class Japanese : public Language
{
public:
	Japanese();
	~Japanese() override;
	void Speak() override;
};

