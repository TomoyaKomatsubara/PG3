#pragma once
#include"Book.h"
class Naruse : public Book
{
public:
	Naruse();
	~Naruse();
	void Read(const char* name) override;
	void Fave(const char* name) override;
protected:
};

