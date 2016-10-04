#include "Dice.h"
#include <iostream>
#include <time.h>

Dice::Dice(int diceSides)
{
	sides = diceSides;
	srand(time(NULL));
	rolls = 0;
}

int Dice::Roll()
{
	rolls += 1;
	return rand() % sides + 1;
}

int Dice::GetRolls() { return rolls; }

int Dice::GetSides() { return sides; }
