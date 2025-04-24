#include<stdio.h>



//int main()
//{
//	
//
//	printf("main = %p\n",main);
//
//
//
//	return 0;
//
//}

void PrintHelloWorld()
{
	printf("HelloWorld\n");
}

int main()
{
	void(*pfunc)();

	pfunc = PrintHelloWorld;
	printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);
	printf("pfuncの内容 = %p\n", *pfunc);
	pfunc();

	return 0;
}


