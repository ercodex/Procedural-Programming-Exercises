/*
Similarly to the structure, the union can contain different 
types of data types. Each time a new variable is initialized 
from the union it overwrites the previous in C language but 
in C++ we also don’t need this keyword and uses that memory location.
This is most useful when the type of data being passed through 
functions is unknown, using a union which contains all possible 
data types can remedy this problem.It is declared by using the 
keyword “union“.
*/
// C++ program to illustrate the use of the unions.

#include <iostream>
using namespace std;

// Defining a Union
union Human {
	int age;
	char letter;
	float weight;
};

// Driver Code
int main()
{
    system("cls");
	// Initializing Union
	union Human Eren;

	Eren.age = 19;

	// Printing values
	cout << "The first value at the allocated memory : " << Eren.age << endl;
    cout << "age value location: " << &Eren.age << endl;
	
    Eren.letter = 'E';

	cout << "\nThe next value stored after removing the previous value : " << Eren.letter << endl;
    cout << "letter value location: " << &Eren.letter << endl;

	Eren.weight = 70.3;

	cout << "\nThe Final value value at the same allocated memory space : " << Eren.weight << endl;
    cout << "weight value location: " << &Eren.weight << endl;
	cout << "\n";
    // I'll solve why E's location looks like E. But as you can see
    // Unions all elements shares same memory location. With this feature
    // It differs from structs.
    
    return 0;
}
