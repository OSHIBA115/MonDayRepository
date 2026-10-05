#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Character.h"
#include "player.h"
using namespace std;


void Game()
{
	srand((unsigned int)time(NULL));

	bool gameSet = 0;

	do
	{

	} while (gameSet == 0);
	  

	int php = 100;
	int pattack = rand() % 20 + 1;
	int defence = rand() % 20 + 1;
	int evasion = rand() % 20 + 1;

	Player playchara;

	bool select;

	cout << "1：攻撃 2：回復 としてどちらか選んで下さい。" << endl;

	do
	{
		cout << "値に誤りがあります。再度入力してください" << endl;
		//1か2
		cin >> select;

	} while (select < 1 || select > 2);


	if (select == 1)
	{

	}

}
