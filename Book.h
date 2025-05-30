#pragma once
class Book//基底クラスBook
{
public:
	Book();
	virtual ~Book();//基底クラスにはデストラクタにもvirtualが必要
	virtual void Read(int a);//各関数同様
	virtual void Fave(int a);//
protected:
	//const char* name;
};

