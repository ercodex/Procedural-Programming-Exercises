// C++ program for checking a number being a prime number.
// Square root method. Logical for big numbers.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num;
    cout << "Enter number bigger than 10: ";
    cin >> num;

    for(int i = 2; i < int(sqrt(num)); ++i){
        if(num%i == 0){
        cout << num << " is not a prime number";   
        return 0;
        }
    }
    cout << num << " is a prime number";
    return 0;
}