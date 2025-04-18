#include<stdio.h>

int Recursive(int workingTime, int hourlyWage)
{
	//printf("働いた時間%d,初期の時間給%d", workingTime, hourlyWage);

	/*if (workingTime <= 1)
	{
		return (100);
	}
*/
	//int total = 0;
	
	if (workingTime <= 0)
	{
		printf("正しい労働時間を入力してください\n\n");
		return 0;
	}


	if (workingTime <= 1)
	{
		return (hourlyWage);
	}
	return hourlyWage + Recursive(workingTime - 1, hourlyWage * 2 - 50);
}

int Normal(int workingTime, int hourlyWage)
{
	int totalWage = 0;

	if (workingTime <= 1)
	{
		return (1);
	}
	totalWage += hourlyWage;
	return Recursive(workingTime - 1, hourlyWage);
}



int main()
{
	
	bool mainOpen = 1;
	while (mainOpen)
	{


		bool Initial = 1;
		bool programOpen = 0;
		bool kara = 0;
		while (kara)
		{
			Initial = true;
			programOpen = false;
			kara = false;

		}
		while (Initial)
		{
			printf("1を押して次へ");
			int selectA = 0;
			scanf_s("%d", &selectA);
			if (selectA == 1)
			{
				Initial = false;
				programOpen = true;
			}
			else
			{
				Initial = false;
				programOpen = false;
				kara = true;
			}
		}

		while (programOpen)
		{


			int workingTime = 10;
			int workingType = 0;
			int basedHourlyWage = 0;

			int totalWage = 0;
			getchar();
			printf("　働き方を選んでください 1 : 通常   2 :再帰的 \n\n");
			
			scanf_s("%d", &workingType);
			
			
			if (workingType != 1 && workingType != 2)
			{
				printf("　正しい働き方を入力してください\n\n");
			}
			else if (workingType == 1)
			{
				basedHourlyWage = 1072;
			}
			else if (workingType == 2)//初期の賃金の決定
			{
				basedHourlyWage = 100;
			}


			getchar();
			printf("　働いた時間を書いてください\n\n");
			scanf_s("%d", &workingTime);

			if (workingType == 2)
			{
				totalWage = Recursive(workingTime, basedHourlyWage);
			} else if (workingType == 1)
			{
				totalWage = Normal(workingTime, basedHourlyWage);
			}


			printf("合計の支給額%d", totalWage);

			printf("やめる場合は0を押してプログラム終了\n 続ける場合は1　\n\n");
			bool select = 0;
			scanf_s(" %c ", &select);
			/*if (select != 'Q' || select != 'N')
			{
				printf("強制終了\n\n");
				mainOpen = false;
			}*/
			if (select == 0)
			{
				printf("プログラムを終了します\n\n");
				mainOpen = false;
			}
			else if (select == 1)
			{
				Initial = true;
				programOpen = false;
			}
			else
			{
				printf("プログラムを終了します\n\n");
				mainOpen = true;
			}

		}


	}



}