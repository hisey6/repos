#pragma once
class Dive {
public:
	Dive(float avg, float diff);
	float CalcTotalPoints() const;
	void Display() const;
	void SetDifficulty(float diff);
	void SetJudgeScore(float score);
private:
	float judgeScore; // average judges score
	float difficulty; // degree of difficulty
};