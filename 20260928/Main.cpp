#include <iostream>
#include "Game.h"


using namespace std;

int main(void)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));
	//ゲームの初期化
	Game game;
	//ゲームの開始
	game.Start();

	return 0;
}