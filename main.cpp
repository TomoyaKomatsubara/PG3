#include<stdio.h>
#include"IShape.h"
#include"Circle.h"
#include"Rectangle.h"

int main(void)
{

	IShape* ball1 = new Circle(1.0f,2.0f);//型は派生元
	ball1->Size();
	ball1->Draw();



	IShape* shikaku = new Rectangle(10.0f, 3.0f);
	shikaku->Size();
	shikaku->Draw();

	return 0;
}