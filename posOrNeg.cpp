// C++ Program to check whether a number is positive or negative.

#include <iostream>
using namespace std;

int main(){
    int x;
    
    cout << "Enter value: ";
    cin >> x;

    if(x < 0){
        cout << x << " is negative";
    }
    else if(x > 0){
        cout << x << " is positive";
    }
    else{
        cout << x << " is zero";
    }

    return 0;
}