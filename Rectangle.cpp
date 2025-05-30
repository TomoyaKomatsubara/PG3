#include "Rectangle.h"
#include<stdio.h>

Rectangle::Rectangle(float a , float b)
{
	width = a;
	height = b;
}

Rectangle::~Rectangle()
{


}

void Rectangle::Size()
{
	size = width * height;
}

void  Rectangle::Draw()
{
	printf("四角形の面積: %fcm\n\n", size);
}


