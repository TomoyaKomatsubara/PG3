#include<stdio.h>


//引数firstとsecondを比較し、小さいほうを返すType型
template<typename Type>
Type min(Type first,Type second)
{
	if (first <= second)
	{
		return first;
	}
	else 
	{
		return second;
	}
}

template<>//template解除
char min(char first, char second)//char型の時数字以外はだめだよと描画する
{
	printf("数字以外は代入できません\n\n");
	return 0;
}




int main()
{
	//intとintの比較
	int minimum = 1;//
	int maxmum = 10;
	int result;
	result = min<int>(minimum, maxmum);//
	printf("%d\n\n", result);



	//floatとfloatの比較
	float minimumf = 15.0f;
	float maxmumf = 90.0f;
	float resultf;
	resultf = min<float>(minimumf,maxmumf);
	printf("%f\n\n", resultf);


	//doubleとdoubleの比較
	double minimumlf = 8.0f;//関数名について、longFloatだからlf
	double maxmumlf = 100.0f;
	double resultlf;
	resultlf = min<double>(minimumlf, maxmumlf);
	printf("%lf\n\n", resultlf);

	//char型の召喚
	char firstChar = 'k';
	char secoundChar = 'k';
	min(firstChar, secoundChar);//ここでchar型を入れています

	return 0;

}