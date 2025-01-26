// C++ program to find the length of the string without built-in functions.

#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;
    int i = 0;
    
    while(str[i] != '\0'){
        ++i;
    }
    
    cout << str << " has the length of " << i;
    return 0;
}