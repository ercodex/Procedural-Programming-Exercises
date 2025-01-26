// C++ program to find out leap years.

#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year: ";
    cin >> year;

    if(year < 0){ // For Before Christ, Julian calendar rules. Simply divide by 4
        if(year % 4 == 0){
            cout << year << " is leap year";
            return 0;
        }
    }
    else{ // For After Christ, Gregorian calendar rules. 3 conditions.
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
            cout << year << " is a leap year";
            return 0;
        }
    }
    cout << year << " is not a leap year";
    return 0;
}