#include "pch.h";
#include "dive.h";
#include <iostream>;

Dive::Dive(float avg, float diff)
{
	SetJudgeScore(avg);
	SetDifficulty(diff);
}

void Dive::Display() const
{
	std::cout << "[Dive]: "
		<< judgeScore << ','
		<< difficulty << ','
		<< CalcTotalPoints() << '\n';
}

void Dive::SetDifficulty(float diff)
{
	difficulty = diff;
}

void Dive::SetJudgeScore(float score)
{
	judgeScore = score;
}

float Dive::CalcTotalPoints() const
{
	return judgeScore * difficulty;
}