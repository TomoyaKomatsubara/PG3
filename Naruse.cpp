#include "Naruse.h"
#include <stdio.h>

Naruse::Naruse()
{
	//name = "Naruse";
}

Naruse::~Naruse()
{

}

void Naruse::Read(int a)
{
	printf("成瀬シリーズ%d巻目を読んだ！\n\n",a+1);//0冊目から数えられるのを防止する
}

void Naruse::Fave(int a)
{
	printf("成瀬シリーズ%d巻目を気に入った！\n\n", a+1);
}




