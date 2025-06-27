#include<stdio.h>
#include<list>
using namespace std;


int main(void)
{
	//駅名のリスト
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	//最初期の駅順
	//イテレーターを使い先頭から順に描画する
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr)
	{
		printf("%s\n", *itr);
	}


	//1971年
	//iteratorを使い先頭から順に探索、Tabataがあったらその前にNishi-Nipporiを挿入する
	for (std::list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = eki_list.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	printf("\n\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr)
	{
		printf("%s\n", *itr);
	}




	//2020年
	//iteratorを使い先頭から順に探索、Tamachiがあったらその前にTakanawa Gatawayを挿入する
	for (std::list<const char*>::iterator itr = eki_list.begin(); itr != eki_list.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = eki_list.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}

	printf("\n\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr)
	{
		printf("%s\n", *itr);
	}




	return 0;
}