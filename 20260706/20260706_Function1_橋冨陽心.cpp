#include<iostream>
#include"20260706_Header1_橋冨陽心.h"

using namespace std;

void Code()
{
	int playerHP = HP_MAX;
	int playerSelect;

	InputCheck(playerSelect);

	if (playerSelect == MIN_INDEX)
	{
		Heal(playerHP);
	}

	cout << "現在のあなたのHPは " << playerHP << " です。" << endl;
}

void Heal(int &heal)
{
	heal += RECOVERY_AMOUNT;
}

void InputCheck(int& Select)
{
	while (true)
	{
		//入力

		cout << "HPを回復する場合：１　回復しない場合：２　を選択してください。\n" << endl;

		cin >> Select;

		if (MIN_INDEX > Select || MAX_INDEX < Select)
		{
			cout << "入力内容に誤りがあります。再度入力してください\n"
				<< endl;
		}
		else
		{
			break;
		}
	}
}