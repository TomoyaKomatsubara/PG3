#include<stdio.h>
#include<stdlib.h>
template<typename Type1,typename Type2>//Type　ポケモンのメタモンのようなもの
//コンストラクタが呼びだされたときに型が決定される
//Typeを1と2を用意したことで、2つの型を受け取ることができる

class Box
{
public:
	Type1 X;//
	Type2 Y;//
	Box(Type1 a, Type2 b) : X(a), Y(b) {};//コンストラクタ

	//小さいほうを返す関数
	Type1 Min()
	{
		if (X > Y)
		{
			return static_cast<Type1>(Y);//どちらにしても引数の
		}
		else
		{
			return static_cast<Type1>(X);
		}
	}
};
int main()
{

	int i1 = 10;//iはintの略
	int i2 = 20;
	float f1 = 1.2;//fはfloatの略
	float f2 = 3.4;
	float lf1 = 5.25555;//lfはdoubleの略
	float lf2 = 5.555;

	//int X = 10;
	//float Y = 1.0f;
	//double Z = 0.2555;
    //
	/*Box<int, int> boxResult1(X,Y);
	Box<int, float> boxResult2(X,Y);*/

	Box<int,int> b1(i1, i2);
	Box<float,float> b2(f1, f2);
	Box<double,double> b3(lf1, lf2);
	Box<int,float> b4(i1, f1);
	Box<float,double> b5(f2, lf1);
	Box<int,double> b6(i2, lf2);

	printf("%d,と%dの比較\n\n", i1,i2);
	printf("小さいのは %d\n\n", b1.Min());//関数を呼びだして比較
	
	printf("%f,と%fの比較\n\n", f1, f2);
	printf("小さいのは%f\n\n", b2.Min());
	printf("%lf,と%lfの比較\n\n", lf1, lf2);
	printf("小さいのは%lf\n\n", b3.Min());

	printf("%d,と%fの比較\n\n", i1, f1);
	printf("小さいのは%d\n\n", b4.Min());
	printf("%f,と%lfの比較\n\n", f2, lf1);
	printf("小さいのは%f\n\n", b5.Min());
	printf("%d,と%lfの比較\n\n", i2, lf2);
	printf("小さいのは%d\n\n", b6.Min());
	return 0;

}