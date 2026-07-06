#include<iostream>
#include"20260706_Header1_橋冨陽心.h"

using namespace std;

void Code()
{
	int playerHP = HP_MAX;
	int playerSelect;

	cout << "HPを回復する場合：１　回復しない場合：２　を選択してください。\n" << endl;

	cin >> playerSelect;

	if (playerSelect == 1)
	{
		Heal(playerHP);
	}

	cout << "現在のあなたのHPは " << playerHP << " です。" << endl;
}

void Heal(int &heal)
{
	heal += RECOVERY_AMOUNT;
}