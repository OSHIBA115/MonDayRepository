#include<iostream>
#include"20260706_HeaderMain2_橋冨陽心.h"

using namespace std;
//ゲーム進行
void Game()
{
	//変数
	int PL,CSelect;
	int Level = INITIAL_VALUE;
	int EXP = INITIAL_VALUE;

	cout << "CPUと対戦するじゃんけんゲームをします。5回勝負です\n"
		<< "選択は数字で選択し、手の割り振りは以下の通りです\n"
		<< "　0:グー　1:チョキ　2:パー\n"
		<< endl;
	//ゲームループ
	while (true)
	{
		//入力・入力チェック
		InputCheck(PL);
		//乱数初期化
		srand((unsigned int)time(NULL));
		//CPU選択
		CSelect = rand() % HAND_INDEX_MAX;
		//勝負結果
		Result(CSelect, PL, Level,EXP);
		//5レベル達成でループを抜ける
		if (Level >= LEVEL_MAX)
		{
			break;
		}
	}
}
//入力チェック
void InputCheck(int &pl)
{
	//入力チェック
	while (true)
	{
		//入力
		cout << "0:グー　1:チョキ　2:パー から選択してください" << endl;
		cin >> pl;
		//範囲内か判定
		if (HAND_INDEX_MIN > pl || HAND_INDEX_MAX < pl)
		{
			//再度入力させる
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			//不備がない場合ループを抜ける
			break;
		}
	}
}
//勝ち負け表示
void Result(int CSelect,int PL,int &level, int &EXP)
{
	//変数
	int Check;
	//勝負結果用
	Check = CSelect - PL;
	//勝負結果
	if (Check == 1 || CSelect == INITIAL_VALUE && PL)
	{
		//勝ち
		cout << "あなたの勝ち！\n" << endl;
		//レベルアップ処理
		LevelUp(level, EXP);
	}
	else if (CSelect == PL)
	{
		//引き分け
		cout << "引き分け\n" << endl;
	}
	else
	{
		//負け
		cout << "CPUの勝ち！\n" << endl;
	}
}
//レベルアップ処理
void LevelUp(int &Lv,int &EXP)
{
	//変数宣言
	int remainder;
	int EX;
	//ランダムで０が出た時のリセット用含めた経験値決定
	do
	{
		//乱数生成
		EX = rand() % 16;
		//加算
		EXP += EX;
		//１も増えない＝EXが０だからリセット
	} while (EX == EXP);
	//獲得経験値表示
	cout << "経験値を" << EX << "獲得しました！" << endl;
	//レベルアップ判断
	if ( EXP >= THRESHOLD)
	{
		//レベル加算
		Lv++;
		//獲得経験値リセット
		EXP = EXP - 20;
		//レベルアップ表示
		cout << "レベルアップ！" << Lv << "レベルになりました！" << endl;
	}
	//現在の経験値表示
	cout << "現在の経験値：" << EXP << endl;
}

