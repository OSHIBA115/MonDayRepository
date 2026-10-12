#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	/*
	//コンストラクタ
	Character character("湯たんぽ");
	cout << character.GetName() << endl;

	character.Attack();
	*/

	Player player("勇者");
	Enemy enemy("スライム");
	Boss boss("魔王");

	cout << player.GetName() << endl;
	cout << enemy.GetName() << endl;
	cout << boss.GetName() << endl;

	player.Attack();
	enemy.Attack();
	boss.Attack();

	return 0;
}