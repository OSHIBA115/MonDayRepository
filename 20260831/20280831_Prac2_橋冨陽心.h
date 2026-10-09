#pragma once
#include <iostream>
using namespace std;

class ScoreManager
{
private:
    int currentScore = 0; // 現在のスコア
    int highScore = 0;    // ハイスコア

public:
    ScoreManager();

    void addPoints(int points)
    {
        currentScore += points;
    }

    void resetScore()
    {
        currentScore = 0;
    }

    void updateHighScore()
    {
        if (currentScore > highScore)
        {
            currentScore = highScore;
        }
    }

    void displayScores() const
    {
        cout << "現在のハイスコア：\n" << currentScore 
            << "ハイスコア：\n" << highScore << endl;
    }
};
