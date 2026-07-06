#pragma once

//定数
const int HP_MAX = 100;
const int RECOVERY_AMOUNT = 20;
const int MIN_INDEX = 1;
const int MAX_INDEX = 2;

//関数プロトタイプ宣言
/// <summary>
/// 実行関数
/// </summary>
/// <param name="Code"></param>
void Code();

/// <summary>
/// 回復関数
/// </summary>
/// <param name="heal"></param>
void Heal(int& heal);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="Select"></param>
void InputCheck(int& Select);
