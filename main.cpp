#include<stdio.h>
#include<stdlib.h>

int main()
{
	int destiny = -1;

	destiny = rand() % 2;


	printf("丁半どっちにかける？\n\n");
	int selection = -1;
	scanf_s("%d", &selection);
	printf("あなたは\n");
	if (selection == 0)
	{
		printf("丁");
	}
	else
	{
		printf("半");
	}
	printf("にかけた！！\n\n");

	//三秒間待ってやる


	//運命の答え合わせ

	if (destiny == 0)
	{
		printf("答え:丁\n");
	} else
	{

		printf("答え:半\n");
	}

	if (destiny == selection)
	{
		printf("あなたの価値！！\n\n");
	}
	else
	{
		printf("あなたの負け…\n\n");
	}







	return 0;
}


