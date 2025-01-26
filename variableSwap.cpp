// C++ program to replace two variables without an additional one.

#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << "X: " << x << ", Y: " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "X: " << x << ", Y: " << y;
    return 0;
}