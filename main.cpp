#include<stdio.h>
#include"Book.h"
#include"Naruse.h"
#include"RasenProject.h"


int main()
{
	Book* book[6] = {};
	//Book* book = {};

	for (int i = 0; i < 6; i++)
	{
		if (i < 5)//５冊
		{
			book[i] = new Naruse;//本棚に「成瀬」シリーズを追加
		}
		else//6-1冊
		{
			book[i] = new RasenProject;//本棚に「螺旋プロジェクト」シリーズを追加
		}
	}

	for (int i = 0; i < 6; i++)//本棚にある本を6冊目まで回す
	{
		book[i]->Read(i);//読む
		book[i]->Fave(i);//気に入る

		
	}
	
	for (int i = 0; i < 6; i++)//デリートの処理
	{
		delete book[i];//本棚ごと綺麗さっぱり焼却処分
	}
	return 0;
}