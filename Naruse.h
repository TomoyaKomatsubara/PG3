#pragma once
#include"Book.h"//基底クラスinclude
class Naruse : public Book
{
public:
	Naruse();
	~Naruse();
	void Read(int a) override;//overrideで上書き
	void Fave(int a) override;

};

