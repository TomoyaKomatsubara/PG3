#define _USE_MATH_DEFINES
#include "Circle.h"
#include<math.h>
#include<numbers>
#include<stdio.h>



Circle::Circle(float a, float b)
{
	radius1 = a;
	radius2 = a;
}

Circle::~Circle()
{


}

void Circle::Size()//引数は両方半径
{
	size = radius1 * radius2 * static_cast<float>(M_PI);

}
void Circle::Draw()//上記と同様	
{
	printf("円の面積: %f", size);

}