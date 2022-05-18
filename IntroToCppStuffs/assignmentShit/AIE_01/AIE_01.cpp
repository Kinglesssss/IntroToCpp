
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	int i, j, desc;
	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << ", ";
	}
	cout << endl;

	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------
	for (i = 0; i < 5; ++i)
	{
		for (j = i + 1; j < 5; ++j)
		{
			if (numbers[i] < numbers[j]) {
				desc = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = desc;
			}
		}
	}
	for (i = 0; i < 5; ++i)
	{
		cout << "";
		cout << numbers[i];
		cout << ", ";
	}

	// ------------------------------------------------------------------------

	return 0;
}
