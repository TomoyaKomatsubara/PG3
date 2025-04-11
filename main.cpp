#include<stdio.h>

template<typename Type>
Type min(Type a,Type b)
{
	if (a <= b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}

template<>
char min(char a, char b)
{
	printf("文字を入れて！！！\n");
	return 0;
}

//char min<char>(int a, char b)
//{
//	return 99999999;
//}



//template <>
//char min<char>(char a, char b)
//{
//	printf("数字以外は代入できません");
//	return 0;
//}





int main()
{
	printf("harahetta腹減った");

	float minimum = 1.14;
	int maxmum = 10;
	float result;
	result = min<float>(minimum, maxmum);

	printf("%f\n\n", result);

	double a = 15.0f;
	int b = 9;
	float c;
	c = min<float>(a,b);

	printf("%f\n\n", c);





	char x = 'k';
	char v = 'k';
	//char z;
	min(x, v);

	printf("はらへった");

	/*printf("%d\n\n", z);*/


	return 0;

}