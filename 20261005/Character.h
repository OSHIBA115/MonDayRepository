#pragma once

//Šî’êƒNƒ‰ƒX

class Character
{
protected:
	int HP;
	int Attack;
	int Defense;
	int Evasion;

public:
	void StatusSet(int hp, int attack, int defence, int evasion);
};