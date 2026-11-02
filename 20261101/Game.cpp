#include<iostream>
#include"Game.h"
using namespace std;

namespace player
{
	void Attack()
	{
		enemy::HP -= 30;
	}

	void Guard()
	{
		HP += 10;
	}

	void Recovery()
	{
		HP += 20;
	}

}

namespace enemy
{
	void Guard()
	{
		HP += 30;
	}

	void Attack()
	{
		player::HP -= 20;
	}

}

