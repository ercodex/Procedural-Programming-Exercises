// C++ code to calculating the area of circle with macros.

#include <iostream>
using namespace std;

#define PI 3.1416

int main(){
    int r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "Area = " << PI*r*r;
    return 0;
}