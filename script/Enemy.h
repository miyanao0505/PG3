#pragma once

class Enemy
{
public:
	enum class Phase {
		kApproach,
		kAttack,
		kLeave
	};

	// メンバ関数
	void Approach();
	void Attack();
	void Leave();

	// 
	void Initialize();
	void Update();

private:
	// メンバ変数
	static void (Enemy::*spFuncTable[])();
	Phase phase_;
};

