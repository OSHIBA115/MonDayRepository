#include<iostream>
#include"20260706_Header1_橋冨陽心.h"

using namespace std;

//実行関数
void Code()
{
	//変数宣言
	int playerHP = HP_MAX;
	int playerSelect;
	//入力チェック
	InputCheck(playerSelect);
	//回復が選択されたか確認
	if (playerSelect == MIN_INDEX)
	{
		//回復関数の呼び出し
		Heal(playerHP);
	}
	//現在HP表示
	cout << "現在のあなたのHPは " << playerHP << " です。" << endl;
}
//回復
void Heal(int &heal)
{
	//HP回復
	heal += RECOVERY_AMOUNT;
}
//入力チェック
void InputCheck(int& Select)
{
	//入力内容が正しくなるまでループ
	while (true)
	{
		//選択肢表示
		cout << "HPを回復する場合：１　回復しない場合：２　を選択してください。\n" << endl;
		//入力
		cin >> Select;
		//入力内容確認
		if (MIN_INDEX > Select || MAX_INDEX < Select)
		{
			//間違っていた場合、再度入力を促す
			cout << "入力内容に誤りがあります。再度入力してください\n" << endl;
		}
		else
		{
			//合っていた場合ループを抜ける
			break;
		}
	}
}