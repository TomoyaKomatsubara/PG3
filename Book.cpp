#include "Book.h"
#include<stdio.h>
#include<stdlib.h>

Book::Book()
{

}

Book::~Book()
{

}

void Book::Read(int a)
{
	printf("%d巻を読んだ！\n\n",a+1);
}

void Book::Fave(int a)
{
	printf("%d巻を気に入った！\n\n",a+1);
}
