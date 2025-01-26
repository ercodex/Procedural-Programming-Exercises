// I'll learn pointer usage with arrays in this code.

#include <iostream>
using namespace std;

int main(){
    int arr[4] = {21, 42, 63, 84};
    int *ptr = arr;

    cout << "First element: " << *ptr << endl;
    (ptr)++;
    cout << "Second element: " << *ptr << endl;
    (ptr)++;
    cout << "Third element: " << *ptr << endl;
    (ptr)++;
    cout << "Fourth element: " << *ptr << endl;

    return 0;
}