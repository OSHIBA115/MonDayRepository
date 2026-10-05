#pragma once

//基底クラス

class Character
{
protected:
	int HP;
	int Attack;
	int Defense;
	int Evasion;

public:

};

//派生クラス
class Player:public Character
{
public:
	Player(int hp,int attack,int defence,int evasion)
	{
		HP = hp;
		Attack = attack;
		Defense = defence;
		Evasion = evasion;
	}

private:

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

