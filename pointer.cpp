#include <iostream>
using namespace std;

int main(){
    int x = 42;
    int *ptr = &x;
    system("cls");
    cout << x << endl; // 42
    cout << ptr << endl; //address
    cout << *ptr << endl; // 42

    *ptr = 21;
    cout << "\n";
    
    cout << x << endl; // 21
    cout << ptr << endl; //address
    cout << *ptr << endl; // 21
    
    return 0;
}