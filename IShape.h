#pragma once
class IShape
{
public:
	//IShape(float a,float b);//基底クラスではコンストラクタは宣言しなくてもよい
	virtual ~IShape();
	
	//= 0を付けることで、プラットフォーム化
	// (実装を派生クラスに強要する関数)
	//面積を求める関数
	virtual void Size() = 0;
	//関数Sizeで求めた値を
	virtual void Draw() = 0;
protected://派生クラスへ継承
	float size = 0;
};

