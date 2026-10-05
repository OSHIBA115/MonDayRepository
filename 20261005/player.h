#pragma once
#include "Character.h"

//”h¶ƒNƒ‰ƒX
class Player :public Character
{
private:
	int pHP,pAttack,pDefence,pEvasion;

public:
	void ShowStatus();
};
