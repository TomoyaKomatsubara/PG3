#include<stdio.h>
#include"Book.h"
#include"Naruse.h"


int main()
{
	Book* Naruse[3] = {};

	for (int i = 0; i < 5; i++)
	{
		Naruse[i] = new Book;
	}

	for (int i = 0; i < 5; i++)
	{
		Naruse[i]->Read(i);
		Naruse[i]->Fave(i);
	}

	return 0;

}