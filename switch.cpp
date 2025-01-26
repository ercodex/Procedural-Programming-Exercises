// C++ code to practice switch cases.

#include <iostream>
using namespace std;

int main(){
    int num = 0, condition;
    
    if(num < 0){
        condition = 1;
    }
    else if(num == 0){
        condition = 2;
    }
    else{
        condition = 3;
    }

    switch(condition){
        case 1: cout << "Negative!!!"; break;
        case 2: cout << "Zero!!!"; break;
        case 3: cout << "Positive!!!"; break;
        default: break;
    }
    return 0;
}