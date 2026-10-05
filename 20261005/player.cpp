#include "player.h"
#include "Config.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


void Player::ShowStatus()
{
	cout << pHP << " , " << pAttack << " , " << pDefence << " , " << pEvasion << "\n" << endl;
}

void Player::UpAttack(int attack)
{
	int index;

	index = rand() % RANDOM_VALUE + 1;

	pHP += index;
}