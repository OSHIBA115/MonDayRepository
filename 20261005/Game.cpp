#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Character.h"
#include "player.h"
#include "Enemy.h"
using namespace std;


void Game()
{
	srand((unsigned int)time(NULL));

	bool gameSet = 0;

	bool select;

	int randomAttack = 0;

	Player pChara;

	do
	{
		cout << "1：攻撃 2：回復 としてどちらか選んで下さい。" << endl;

		do
		{
			cout << "値に誤りがあります。再度入力してください" << endl;
			//1か2
			cin >> select;

		} while (select < 1 || select > 2);



		if (select == 1)
		{
			randomAttack = rand() % 12 + 1;
		}


	} while (gameSet == 0);
	  

}
