// Add two numbers using pointers.
#include <iostream>
using namespace std;

int main(){
    int x = 20, y = 22;
    int *p1 = &x;
    int *p2 = &y;

    cout << "x + y = " << *p1 + *p2 << endl;
    return 0;
}