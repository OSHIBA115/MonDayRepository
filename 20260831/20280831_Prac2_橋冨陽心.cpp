#include <iostream>
#include <string>
#include"20280831_Prac2_橋冨陽心.h"

using namespace std;

int main() {
    ScoreManager();
    
    ScoreManager score;

    score.addPoints();

    score.deposit(1000.0);//1000円入金
    score.withdraw(2000.0);//2000円引き出し
    score.withdraw(5000.0); // 残高不足で失敗

    score.displayAccountInfo();//口座人名義と残高を再表示

    return 0;
}