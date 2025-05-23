#include "Book.h"
#include<stdio.h>
#include<stdlib.h>

Book::Book()
{

}

Book::~Book()
{

}

void Book::Read(const char* name)
{
	printf("%s を読んだ！\n\n",name);
}

void Book::Fave(const char* name)
{
	printf("%s 気に入った！\n\n",name);
}
