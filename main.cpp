#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

typedef void (*PFunc)(int*);
                    //受け取るデータ(保持するデータ)




void PrintChouHann(int x)
{
	if (x == 0)
	{
		printf("丁\n");
	} else
	{
		printf("半\n");
	}
}

void PrintWinOr(int x, int y)
{
	if (x == y)
	{
		printf("あなたの勝ち\n\n");
	} else
	{
		printf("あなたの負け\n\n");
	}
}

void DisplayResult(int* s)
{
	printf("%d秒間待ってやる…\n\n",*s);

}

void SetTimeOut(PFunc p, int second)//関数が入っているから、
                                //PFunc pもここで呼びだせばOK！！！！！
{
	p(&second);
	Sleep(second * 1000);

	

}




int main()
{
	int destiny = -1;

	destiny = rand() % 2;

	PFunc p;//pという名前の変数
	  //PFunc型(int型ポインタ)
	p = DisplayResult;//
	


	printf("丁半どっちにかける？\n\n");
	int selection = -1;
	scanf_s("%d", &selection);
	printf("あなたは\n");
	PrintChouHann(selection);
	printf("にかけた！！\n\n");

	//三秒間待ってやる

	SetTimeOut(p, 3);//pの引数情報が入る




	//運命の答え合わせ

	
		printf("答え:\n");
		PrintChouHann(destiny);
	

		PrintWinOr(destiny, selection);







	return 0;
}


