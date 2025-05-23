#pragma once
class Book
{
public:
	Book();
	virtual ~Book();
	virtual void Read(int a);
	virtual void Fave(int a);
protected:
	const char* name;
};

