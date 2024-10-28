#pragma once

template <typename T1, typename T2>

class MyTools
{
public:
	T1 num1_;
	T2 num2_;

	MyTools(T1 num1, T2 num2) : num1_(num1), num2_(num2){}

	// メンバ関数
	T1 Min() {
		return static_cast<T1>(num1_ < num2_ ? num1_ : num2_);
	}
};

