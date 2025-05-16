#pragma once
class Enemy
{
public:
	void (EnemyApproachFunc)();
	void (EnemyAttackFunc)();
	void (EnemyWithdrawalFunc)();
	void Update();


private:
	static void (Enemy::* EnemyPointerFunc[])();//ポインタ型関数のテーブル(宣言)
};

