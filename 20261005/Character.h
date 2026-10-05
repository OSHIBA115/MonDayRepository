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

};


class Enemy :public Character
{
public:
	Enemy(int hp, int attack, int defence, int evasion)
	{
		HP = hp;
		Attack = attack;
		Defense = defence;
		Evasion = evasion;
	}

private:


};

