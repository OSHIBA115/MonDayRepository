#include <iostream>
#include <string>
#include"20280831_Prac1_橋冨陽心.h"

using namespace std;

int main() {
    BankAccount account("Alice", 5000.0);//口座人名義と残高を設定

    account.displayAccountInfo();//口座人名義と残高を表示

    account.deposit(1000.0);//1000円入金
    account.withdraw(2000.0);//2000円引き出し
    account.withdraw(5000.0); // 残高不足で失敗

    account.displayAccountInfo();//口座人名義と残高を再表示

    return 0;
}