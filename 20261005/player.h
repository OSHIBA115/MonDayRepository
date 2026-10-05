#pragma once
#include "Character.h"
#include "Config.h"
#include<cstdlib>
#include<ctime>

//îhê∂ÉNÉâÉX
class Player :public Character
{
private:
	int pHP,pAttack,pDefence,pEvasion;

public:
	Player()
	{
		pHP = INITIAL_HP;
		pAttack = rand() % INITIAL_RAMDOM_VALUE + 1;
		pDefence = rand() % INITIAL_RAMDOM_VALUE + 1;
		pEvasion = rand() % INITIAL_RAMDOM_VALUE + 1;
	}
	void ShowStatus();
	void UpAttack(int attack);
};
