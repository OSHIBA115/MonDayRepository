#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

//ゲーム 
int main(void)
{
    //変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;

    //乱数初期化
    srand((unsigned int)time(NULL));

    //ゲームルール・設定表示
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲームループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //PL向け球種表示
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        //入力チェック
        while (true)
        {
            //入力
            cin >> ply;

            //入力値に誤りがないかチェック
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                //誤りがある場合再入力を催促
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                //誤りがない場合そのまま続行
                break;
            }
        }

        //プレイヤーが選んだ球種を表示
        PitingType(ply);

        //球種決定用の確率を生成して保存
        emy = rand() % PROBABILITY;
        prod = rand() % PROBABILITY;

        //先に作った確率をもとに球種を決定
        // 3/4でボールorストライク
        if (ply != emy)
        {
            //更に1/4でボール、3/4でストライクのカウントを追加
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //1/4でOUT or HIT
        else
        {
            //ボールとストライクのカウントをリセット
            Strike = 0;
            Ball = 0;
            //更に1/4でOUT＋１
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            //3/4でHIT＋１
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }

        //ストライクとボールのカウントが規定値に達したらOUT、HITのカウントに変換
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクカウントが溜まったらOUTカウントを＋１
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ボールカウントが溜まったらHITカウントを＋１
            else
            {
                Hit++;
            }

            //ストライクとボールのカウントをリセット
            Strike = 0;
            Ball = 0;
        }

        //現在の点数を表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //勝敗を表示
    Result(Out);

    //ゲーム終了
    return 0;
}