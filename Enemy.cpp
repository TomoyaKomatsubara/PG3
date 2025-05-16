#include "Enemy.h"
#include<stdio.h>

void Enemy::EnemyApproachFunc()
{
	printf("Enemy approach!\n\n");
};

void Enemy::EnemyAttackFunc()
{
	printf("Enemy's Attack!\n\n");
};
void Enemy::EnemyWithdrawalFunc()
{
	printf("Enemy run away!\n\n");
};



void (Enemy::* Enemy::EnemyPointerFunc[])()
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

