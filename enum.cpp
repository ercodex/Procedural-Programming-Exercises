// C++ program to illustrate the use of the enums.

#include <bits/stdc++.h>
using namespace std;

// Defining an enum
enum brothers { eren, erdem, hamza };

brothers big = eren;
brothers middle = erdem;
brothers small = hamza;

// Driver Code
int main()
{
	cout << "The numerical value "
		<< "assigned to eren : " << big << endl;

	cout << "The numerical value "
		<< "assigned to erdem : " << middle << endl;

	cout << "The numerical value "
		<< "assigned to hamza : " << small << endl;

	return 0;
}