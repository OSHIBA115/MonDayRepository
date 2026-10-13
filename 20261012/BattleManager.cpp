#include "BattleManager.h"
#include<iostream>
#include<string>
using namespace std;

void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss)
{
	cout << "勇者の名前" << player->GetName() << endl;
	cout << "敵の名前" << enemy->GetName() << endl;
	cout << "ボスの名前" << boss->GetName() << endl;

	player->Attack();
	enemy->Attack();
	boss->Attack();
}
