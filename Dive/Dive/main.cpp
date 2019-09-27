#include "pch.h"
#include "dive.h"
#include <iostream>

int main()
{
	// Create three Dive objects
	Dive D1(8.5, 3.0);
	Dive D2(9.0, 2.5);
	Dive D3(8.0, 3.3);

	// Display the Dives
	D1.Display();
	D2.Display();
	D3.Display();

	D2.SetDifficulty(3.0);

	// Display the Dives again
	std::cout << "\nChanging Dive 2\n";
	D1.Display();
	D2.Display();
	D3.Display();

	return 0;
}
