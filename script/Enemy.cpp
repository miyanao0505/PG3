#include "Enemy.h"
#include <stdio.h>

// staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave
};

void Enemy::Initialize() {
	phase_ = Phase::kApproach;
}

void Enemy::Update() {
	// 現在のフェーズの関数を実行
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}

void Enemy::Approach() {
	printf("敵が接近\n");

	phase_ = Phase::kAttack;
}

void Enemy::Attack() {
	printf("敵の攻撃\n");

	phase_ = Phase::kLeave;
}

void Enemy::Leave() {
	printf("敵の離脱\n");
}
