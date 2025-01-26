// C++ code to check whether a number is prime or not. May fail.

#include <iostream>
using namespace std;

int main(){
    system("cls");
    int x, y = 2;
    cout << "Enter a number: ";
    cin >> x;
    int dividers = x/2;

    for(int i = 0; i < dividers; ++i){
        if(x%y == 0){
            cout << x << " is not a prime number." << endl;
            return 0;
        }
        else if(x%y != 0){
            ++y;
            continue;
        }
    }
    cout << x << " is a prime number.";
    return 0;
}