#include <iostream>
#include <string>
#include"20280831_Prac2_ã¥ïyózêS.h"

using namespace std;

int main() 
{
    int point = 1000;

    ScoreManager();
    
    ScoreManager score;

    score.resetScore();

    score.displayScores();
    
    score.addPoints(point);

    score.updateHighScore();

    score.displayScores();


    return 0;
}