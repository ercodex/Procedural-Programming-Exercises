// This code uses Euclidean Division Algorithm.
// And finds Greatest Common Divisor of two numbers.
// Also contains the method of swapping two variables without the extra variable.
 
#include <iostream>
using namespace std;

int euclidean(int a, int b);

int main(){
    cout << euclidean(900, 54);
    return 0;
}

int euclidean(int a, int b){
    int remainder;
    
    if(a > b){ //If a > b, swap a and b.
        a = a + b;
        b = a - b;
        a = a - b;
    }
    cout << "a and b after swapping: " << a << ", " << b << endl;
    while(a > 0){
        remainder = b % a;
        b = a;
        a = remainder;
        if (a == 0){
            return b;
        }
    }
}