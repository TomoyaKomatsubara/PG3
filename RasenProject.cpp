#include "RasenProject.h"
#include <stdio.h>

RasenProject::RasenProject()
{
	//name = "Naruse";
}

RasenProject::~RasenProject()
{
	
}

void RasenProject::Read(int a)
{
	printf("螺旋プロジェクト%d巻目を読んだ！\n\n", a + 1);
}

void RasenProject::Fave(int a)
{
	printf("螺旋プロジェクト%d巻目を気に入った！\n\n", a + 1);
}

