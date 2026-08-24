#include <iostream>
using namespace std;

int main(void)
{
    int a = 0;//変数aを0で初期化
    int* p = &a;//ポインタ変数pを変数aの場所で初期化

    cout << "aの初期値: " << a << endl;//変数aの値を表示

    *p = 10;//ポインタ変数pに入れた変数aの場所の値を10で上書き

    cout << "aの変更後の値: " << a << endl;//変数aの値を表示

    return 0;//終了
}