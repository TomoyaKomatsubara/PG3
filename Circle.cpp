#define _USE_MATH_DEFINES
#include "Circle.h"
#include<math.h>
#include<numbers>
#include<stdio.h>


Circle::Circle()
{



}

Circle::~Circle()
{


}

void Circle::Size(float a,float b)//引数は両方半径
{
	size = a * b * M_PI;

}
void Circle::Draw(float a, float b)//上記と同様	
{
	printf("円の面積: %f", size);

}