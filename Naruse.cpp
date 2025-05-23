#include "Naruse.h"
#include <stdio.h>

Naruse::Naruse()
{
	name = "Naruse";
}

Naruse::~Naruse()
{

}

void Naruse::Read(int a)
{
	printf("成瀬シリーズ%d巻目を読んだ！\n\n",a);
}

void Naruse::Fave(int a)
{
	printf("成瀬シリーズ%d巻目を気に入った！\n\n",a);
}




