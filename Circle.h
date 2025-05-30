#include"IShape.h"
#pragma once
class Circle:public IShape
{
public:
	Circle(float a, float b);
	~Circle();
	void Size() override;
	void Draw() override;
	float size = 0;

	//Circle独自の変数
	float radius1 = 0;
	float radius2 = 0;
	//float pi = 3.141592;
};

