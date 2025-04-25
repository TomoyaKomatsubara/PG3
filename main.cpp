#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Time.h>

typedef void (*PFunc)(int*);
                    //受け取るデータ(保持するデータ)


//0を丁、1を半として扱い、丁半を当てるゲーム


//ダイスの目(x)を引数として受け取り、それを文章で返す関数
void PrintDiceEyes(int x)
{
	printf("ダイスの目は%dだった！\n\n",x);
}

//丁か半かを表すint型(0が丁1が半)を受け取り、それに応じ答えを返す関数
//計算自体は関数外で行っている
void PrintChouHann(int x)
{
	if (x == 0)
	{
		printf("丁\n");//偶数
	} else
	{
		printf("半\n");//奇数
	}
}

//自分が選んだ丁半と、diceからはじき出した丁半(destiny)を比べ、同じなら勝ち、違うなら負けを返す関数
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


//ポインタ関数PFunc型の変数pを引数として受け取り、
//その関数の引数にsecondを入れる　(この場合はDisplayResultのポインタを持つPFunc型の変数pを引数として受け取り、その引数としてsecondを入れる)
void SetTimeOut(PFunc p, int second)//関数が入っているから、
                                //PFunc pもここで呼びだせばOK！！！！！
{
	p(&second);
	Sleep(second * 1000);
}

//SetTimeOutで呼びだして、「 秒間待ってやる」と宣言するだけの関数
void DisplayResult(int* s)
{
	printf("%d秒間待ってやる…\n\n", *s);
}


int main()
{
	int destiny = -1;//丁半の結果
	int dice = -1;//ダイスの結果

	unsigned int currenTime = time(nullptr);
	srand(currenTime);
	dice = rand() % 6 + 1;

	//ここでdiceの結果からdestinyを割り出す
	if (dice % 2 == 0)//２で割り切れるならdestinyは0(丁(偶数))
	{
		destiny = 0;
	}
	else
	{
		destiny = 1;
	}

	PFunc p;//pという名前の変数
	  //PFunc型(int型ポインタ)
	p = DisplayResult;//
	


	printf("丁半どっちにかける？\n0で丁選択　　1で半選択\n");
	int selection = -1;
	scanf_s("%d", &selection);
	printf("あなたは\n");
	PrintChouHann(selection);
	printf("にかけた！！\n\n");

	//三秒間待ってやる

	SetTimeOut(p, 3);//pの引数情報が入る  




	//運命の答え合わせ

	
		printf("答え:\n");
		PrintDiceEyes(dice);
		PrintChouHann(destiny);
	
		//勝ちか負けかを描画する関数を呼びだす！
		PrintWinOr(destiny, selection);







	return 0;
}


