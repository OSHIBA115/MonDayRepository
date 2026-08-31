#pragma once

class ScoreManager
{
private:
    int currentScore; // 現在のスコア
    int highScore;    // ハイスコア

public:
    ScoreManager();

    void addPoints(int points)
    {

    }

    void resetScore()
    {

    }

    void updateHighScore()
    {

    }

    int displayCurrentScores(int currentScore) const
    {
        return currentScore;
    }

    int displayHighScores(int highScore) const
    {
        return highScore;
    }

};
