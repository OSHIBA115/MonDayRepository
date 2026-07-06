#include<iostream>
#include"20260706_HeaderMain2_橋冨陽心.h"

using namespace std;

void Game()
{
	int PL,CSelect;
	int Level = INITIAL_VALUE;
	int EXP = INITIAL_VALUE;

	while (true)
	{
		//入力・入力チェック
		InputCheck(PL);
		//乱数初期化
		srand((unsigned int)time(NULL));
		//CPU選択
		CSelect = rand() % HAND_INDEX_MAX;
		//勝負結果
		Result(CSelect, PL, Level);
		//5レベル達でループを抜ける
		if (Level >= LEVEL_MAX)
		{
			break;
		}
	}
}

void InputCheck(int &pl)
{
	//入力チェック
	while (true)
	{
		//入力
		cout << "0:グー　1:チョキ　2:パー から選択してください" << endl;
		cin >> pl;
		if (HAND_INDEX_MIN > pl || HAND_INDEX_MAX < pl)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}
}

void Result(int CSelect,int PL,int &level)
{
	int Check;
	//勝負結果用
	Check = CSelect - PL;
	//勝負結果
	if (Check == 1 || CSelect == INITIAL_VALUE && PL)
	{
		cout << "あなたの勝ち！\n" << endl;
	}
	else if (CSelect == PL)
	{
		cout << "引き分け\n" << endl;
	}
	else
	{
		cout << "CPUの勝ち！\n" << endl;
	}
}

void LevelUp(int &Lv,int &EXP)
{
	int remainder;
	int EX;

	do
	{
		EX = rand() % 16;
		EXP += EX;

	} while (EX == EXP);

	if ( EXP >= THRESHOLD)
	{
		Lv++;
	}
}

