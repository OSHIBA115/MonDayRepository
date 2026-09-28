#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "Config.h"

using namespace std;

void Game()
{
	//======================
	//変数
	//======================

	//プレイヤーの手札（合計）
	int PLhand = 0;
	//CPUの手札（合計）
	int CPUhand = 0;
	//ランダム生成された数の一時保存
	int random = 0;


	//======================
	//配列
	//======================

	//山札
	int Cardeck[DECK_MAX] = {};
	//カードの使用回数管理用
	int Usedcard[DECK_MAX] = {};

	//======================
	//乱数の初期化
	//======================
	srand((unsigned int)time(NULL));

	//======================
	//カードの準備（二枚配布）
	//======================
	// PLに配布
	//１プレイヤーにつき２枚のため２回繰り返し
	for (int i = 0; i < CARD_SET_NUMBER; i++)
	{
		//0～10の乱数生成
		random = rand() % DECK_MAX;
		//生成した乱数に対応する配列にその数を使ったことをカウント
		Usedcard[random] += 1;
		//生成した数に＋１して帳尻合わせ＆合計処理
		PLhand += random + 1;
	}
	//CPUに配布
	for (int i = 0; i < CARD_SET_NUMBER; i++)
	{
		//0～10の乱数生成
		random = rand() % DECK_MAX;
		//生成した乱数に対応する配列にその数を使ったことをカウント
		Usedcard[random] += 1;
		//生成した数に＋１して帳尻合わせ＆合計処理
		CPUhand += random + 1;
	}

	if (PLhand==21||CPUhand==21)
	{

	}

	//======================
	//プレイヤーに手札開示＆ゲーム進行案内
	//======================

	cout << "最初の手札２枚をお配りしました。あなたの手札の合計値は　「" << PLhand << "」　です。\n"
		<< "最終的な合計値が「21」に近いほうが勝利となります。「22」以上になるとバーストしてしまい、負けとなります。\n"
		<< "追加でカードを1枚引く場合は　１　を、引かない場合は　０　を選択し、ゲームを続行してください\n" << endl;
}