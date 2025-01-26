// C++ program to check whether a char is an alphabet.

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
        cout << ch << " is an alphabet";
        return 0;
    }
    cout << ch << " is not an alphabet";
    return 0;
}