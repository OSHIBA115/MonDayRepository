#include <iostream>
#include <cstdlib>
#include <ctime>
#include"20260706_HeaderMain2_橋冨陽心.h"

using namespace std;

//Main
int main(void)
{
	cout << "CPUと対戦するじゃんけんゲームをします。5回勝負です\n"
		<< "選択は数字で選択し、手の割り振りは以下の通りです\n"
		<< "　0:グー　1:チョキ　2:パー\n"
		<< endl;

	Game();

	return 0;
}

