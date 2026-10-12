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

	string plName;
	string enName;
	string boName;

	cout << "名前を入力してください" << endl;
	cout << "勇者:" << endl;
	cin >> plName;
	cout << "敵:" << endl;
	cin >> enName;
	cout << "ボス:" << endl;
	cin >> boName;

	Player player(plName);
	Enemy enemy(enName);
	Boss boss(boName);

	cout << player.GetName() << endl;
	player.Attack();

	cout << enemy.GetName() << endl;
	enemy.Attack();

	cout << boss.GetName() << endl;
	boss.Attack();

	return 0;
}