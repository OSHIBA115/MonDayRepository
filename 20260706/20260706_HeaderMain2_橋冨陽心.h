#pragma once

//定数
const int INITIAL_VALUE = 0;
const int HAND_INDEX_MIN = 0;
const int HAND_INDEX_MAX = 3;
const int LEVEL_MAX = 5;
const int THRESHOLD = 20;

//プロトタイプ宣言
void Game();
void InputCheck(int& pl);
void Result(int CSelect, int PL, int& level);
