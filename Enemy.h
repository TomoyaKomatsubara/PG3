#pragma once
class Enemy
{
public:
	//敵の行動3パターン　接近→射撃→離脱
	void (EnemyApproachFunc)();
	void (EnemyAttackFunc)();
	void (EnemyWithdrawalFunc)();
	//関数ポインタテーブルをUpdate内で回す
	void Update();


private:
	static void (Enemy::* EnemyPointerFunc[])();//関数ポインタのテーブル(宣言)
};

