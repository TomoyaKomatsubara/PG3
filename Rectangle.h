#include"IShape.h"
#pragma once
class Rectangle:public IShape
{

public:
	Rectangle(float a, float b);
	~Rectangle();
	void Size() override;
	void Draw() override;

private://protectedは継承できるけどprivateは継承できない
	float height;
	float width;
//protected:
//	float size;

};

