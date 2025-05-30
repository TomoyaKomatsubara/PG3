#include"IShape.h"
#pragma once
class Circle:public IShape
{
	Circle();
	~Circle();
	void Size(float a, float b) override;
	void Draw(float a, float b) override;
	float size = 0;

	//float pi = 3.141592;
};

