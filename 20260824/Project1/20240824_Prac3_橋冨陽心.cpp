#include<iostream>

using namespace std;

int main(void)
{
	//定数
	const int NUM_MAX = 5;//numbersの配列数

	int numbers[NUM_MAX] = { 35, 82, 17, 96, 54 };//配列numbersを初期化
	int* pnum;//ポインタ変数pnumを初期化
	int pmax = 0;//最大値を保存するための変数

	pnum = numbers;//ポインタ変数pnumに配列numbersの先頭の番地を代入

	for (int i = 0; i < NUM_MAX; i++)//配列数分繰り返し
	{
		if (pnum[i] > pmax)//pmax(仮の最大値)よりその配列の値が大きい場合
		{
			pmax = pnum[i];//仮の最大値として代入
		}
	}

	cout << "最大数は：" << pmax  << "です";//表示

	return 0;//終了
}