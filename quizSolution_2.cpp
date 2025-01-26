// Solution of a programming quiz.

#include <iostream>

#define SIZE 5

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int A[SIZE][SIZE], B[SIZE][SIZE];
	int *p, *q;
	
	p = &A[0][0];
	q = &B[0][0];

	// PART 1
	for (int i = 0; i < SIZE * SIZE; i++)
		*(p + i) = 0;

	cout << "MATRIX A" << endl << "------------";

	for (int i = 0; i < SIZE * SIZE; i++)
	{
		if (i % SIZE == 0) cout << endl;
		cout << *(p + i) << " ";
	}

	// PART 2
	for (int i = 0; i < SIZE; i++)
		*(p + i) = 1;

	for (int i = 0; i < SIZE * SIZE; i += SIZE)
		*(p + i) = 1;

	for (int i = SIZE * (SIZE - 1); i < SIZE * SIZE; i++)
		*(p + i) = 1;

	for (int i = SIZE - 1; i < SIZE * SIZE; i += SIZE)
		*(p + i) = 1;
		
	cout << endl << "MATRIX A" << endl << "------------";

	for (int i = 0; i < SIZE * SIZE; i++)
	{
		if (i % SIZE == 0) cout << endl;
		cout << *(p + i) << " ";
	}

	// PART 3
	for (int i = 0; i < SIZE * SIZE; i++)
		*(q + i) = *(p + i) * 2;

	cout << endl << "MATRIX B" << endl << "------------";

	for (int i = 0; i < SIZE * SIZE; i++)
	{
		if (i % SIZE == 0) cout << endl;
		cout << *(q + i) << " ";
	}

	return 0;
}