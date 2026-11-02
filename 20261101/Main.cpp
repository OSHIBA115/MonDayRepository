#include<iostream>
#include"Game.h"
using namespace std;

int main(void)
{
	int select = 0;

	do
	{
		cout << "0,UŒ‚ 1,–hŒä 2,‰ñ•œ@‚©‚ç‘I‚×" << endl;

		cin >> select;

		if (select == 0)
		{
			player::Attack();
			enemy::Guard();
		}
		else if (select == 1)
		{
			player::Guard();
			enemy::Attack();
		}
		else
		{
			player::Recovery();
			enemy::Attack();
		}

		cout << "Œ»Ý‚ÌŽc‚è‘Ì—Í\n"
			<< "player:" << player::HP << "\n"
			<< "enemy:" << enemy::HP << "\n"
			<< endl;

	} while (player::HP >= 0 || enemy::HP >= 0);

	cout << "GameSet" << endl;

	return 0;
}