#pragma once

class Dice
{
public:
	Dice(int);

	int Roll();

	int GetRolls();
	int GetSides();

private:
	int rolls;
	int sides;
};