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
	printf("���������āI�I�I\n");
	return 0;
}

//char min<char>(int a, char b)
//{
//	return 99999999;
//}



//template <>
//char min<char>(char a, char b)
//{
//	printf("�����ȊO�͑���ł��܂���");
//	return 0;
//}





int main()
{
	printf("harahetta��������");

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

	printf("�͂�ւ���");

	/*printf("%d\n\n", z);*/


	return 0;

}