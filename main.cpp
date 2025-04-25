#include<stdio.h>

int Add(const int a, const int b)//	足し算の関数
{
	int result = a + b;
	return result;
}

int Subtract(const int a, const int b)
{
	int result = a - b;
	return result;
}

//void PrintHelloWorld()
//{
//	printf("HelloWorld\n");
//}

int main()
{
	/*void(*pfunc)();

	pfunc = PrintHelloWorld;
	printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);
	printf("pfuncの内容 = %p\n", *pfunc);
	pfunc();

	return 0;*/

	int l = 114;
	int h = 514;

	int (*calc)(int, int);//戻り値型(*関数のポインタ型の名前)(引数,引数)
	//このままだとただの箱

	calc = Add;//関数のポイント型calcに関数Addを入れる
	printf("%d\n", calc(l, h));

	calc = Subtract;
	printf("%d\n", calc(l, h));

	return 0;


	//int (*newtype)(int,int);
}


