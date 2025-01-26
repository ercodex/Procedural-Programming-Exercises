// C++ program to toggle every element of a string.

#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Before procedure: '" << str << "'" << endl;
    for (int i = 0; str[i] != '\0'; ++i){
        if(str[i] <= 122 && str[i] >= 97){
            str[i] = str[i] - 32; 
        }
        else if(str[i] <= 90 && str[i] >= 65){
            str[i] = str[i] + 32;
        }
    }
    cout << "After procedure: '" << str << "'" << endl;
    return 0;
}