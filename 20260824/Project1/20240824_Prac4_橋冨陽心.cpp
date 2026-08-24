#include<iostream>

using namespace std;

void Multiples(int* pnum, int elements)
{
	int multiples;//倍数保存

	cout << "何倍しますか？" << endl;
	cin >> multiples;//倍数入力

	cout << "\n"
		<< "変更前" << endl;

	for (int i = 0; i < elements; i++)//要素数繰り返し
	{
		cout << *(pnum + i) << endl;//表示
	}

	cout << "\n"
		<< "変更後" << endl;

	for (int i = 0; i < elements; i++)//要素数繰り返し
	{
		pnum[i] = pnum[i] * multiples;//計算して保存

		cout << *(pnum + i) << endl;//表示
	}

}

int main(void)
{
	//定数
	const int NUM_MAX = 5;//numbersの配列数

	int numbers[NUM_MAX] = { 10,20,30,40,50 };//配列numbersを初期化
	int* pnum;//ポインタ変数pnumを初期化

	pnum = numbers;//ポインタ変数pnumに配列numbersの先頭の番地を代入

	Multiples(pnum,NUM_MAX);//n倍する処理

	return 0;//終了
}