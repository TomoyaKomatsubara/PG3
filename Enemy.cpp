#include "Enemy.h"
#include<stdio.h>

void Enemy::EnemyApproachFunc()//接近
{
	printf("Enemy approach!\n\n");
};

void Enemy::EnemyAttackFunc()//射撃
{
	printf("Enemy's Attack!\n\n");
};
void Enemy::EnemyWithdrawalFunc()//退避
{
	printf("Enemy run away!\n\n");
};



void (Enemy::* Enemy::EnemyPointerFunc[])()//ポインタ型関数のテーブル(実体)
= {
 &Enemy::EnemyApproachFunc,//0
 &Enemy::EnemyAttackFunc,//1
 &Enemy::EnemyWithdrawalFunc,//2
};


void Enemy::Update()
{
	for (int i = 0; i < 3; i++)
	{
		(this->*EnemyPointerFunc [static_cast<size_t>(i)])();
	}
}

