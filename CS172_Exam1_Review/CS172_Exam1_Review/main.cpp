#include <iostream>
#include "Dice.h"
using namespace std;

int main()
{
	Dice d6(6);
	cout << d6.Roll() << endl;
	if (d6.GetSides() != 6)
	{
		cout << "Error in GetSides(). It should return 6\n";
		return 0;
	}

	bool passed = true;
	for (int i = 0; i < 100; i++)
	{
		int x = d6.Roll();
		if (x < 1 || x > 6)
		{
			cout << "Error in Roll() method! Roll returned " << x << endl;
			passed = false;
			break;
		}
	}
	if (passed)
	{
		cout << "Passed Roll Test!" << endl;
	}
	cout << d6.GetRolls() << endl;
	return 0;
}