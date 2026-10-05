#pragma once
#include "Character.h"

//”h¶ƒNƒ‰ƒX
class Enemy :public Character
{
private:
	int eHP, eAttack, eDefence, eEvasion;

public:
	void ShowStatus();
};
