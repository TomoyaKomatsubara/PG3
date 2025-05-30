#include"Book.h"
#pragma once
//Naruseクラスと同様
class RasenProject:public Book
{
public:
	RasenProject();
	~RasenProject();
	void Read(int a) override;
	void Fave(int a) override;
};

