#pragma once
class Book
{
public:
	Book();
	virtual ~Book();
	virtual void Read(const char* name);
	virtual void Fave(const char *name);
protected:
	const char* name;
};

