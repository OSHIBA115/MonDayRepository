#pragma once

//定数
const int INITIAL_VALUE = 0;
const int HAND_INDEX_MIN = 0;
const int HAND_INDEX_MAX = 3;
const int LEVEL_MAX = 5;
const int THRESHOLD = 20;

//プロトタイプ宣言
/// <summary>
/// 進行
/// </summary>
void Game();
/// <summary>
/// 入力チェック
/// </summary>
/// <param name="pl"></param>
void InputCheck(int& pl);
/// <summary>
/// 勝ち負け表示
/// </summary>
/// <param name="CSelect"></param>
/// <param name="PL"></param>
/// <param name="level"></param>
/// <param name="EXP"></param>
void Result(int CSelect, int PL, int& level, int& EXP);
/// <summary>
/// レベルアップ処理
/// </summary>
/// <param name="Lv"></param>
/// <param name="EXP"></param>
void LevelUp(int& Lv, int& EXP);

