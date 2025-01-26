// C++ code to find a number which has 2 or 3 same digits.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int first = number % 10;
    int second = number % 100 - number % 10;
    int third = number - number % 100 - number % 10;
    for(int i = 0; i < 1000; ++i){
        if((number % 100 - number % 10)/10 == number % 10){
            cout << number << "***" << endl;
            ++number;
        }
        else{
            cout << number << endl;
            ++number;
        }
    }

    return 0;
}