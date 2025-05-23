#pragma once
#include"Book.h"
class Naruse : public Book
{
public:
	Naruse();
	~Naruse();
	void Read(int a) override;
	void Fave(int a) override;
protected:
};

