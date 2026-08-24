#include<iostream>

using namespace std;

int main(void)
{
	//定数
	const int NUM_MAX = 5;//numbersの配列数

	int numbers[NUM_MAX] = { 10,20,30,40,50 };//配列numbersを初期化
	int* pnum;//ポインタ変数pnumを初期化

	pnum = numbers;//ポインタ変数pnumに配列numbersの先頭の番地を代入

	for (int i = 0; i < NUM_MAX; i++)//配列数分繰り返し
	{
		cout << *(pnum + i) << " ";//ポインタ変数に入っている番地に＋１しながら表示
	}

	return 0;//終了
}