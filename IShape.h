#pragma once
class IShape
{
public:
	IShape();
	virtual ~IShape();
	
	//= 0を付けることで、プラットフォーム化
	// (実装を派生クラスに強要する関数)
	//面積を求める関数
	virtual void Size(float a,float b) = 0;
	//関数Sizeで求めた値を
	virtual void Draw(float a,float b) = 0;
protected:
	float size = 0;
};

