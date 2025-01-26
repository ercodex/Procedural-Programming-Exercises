// C++ program to check whether a string is a palindrome or not.
// Works for both numbers and characters!

#include <iostream>
using namespace std;

int main(){
    string str;
    int len;
    cout << "Input: ";
    cin >> str;

    //Getting the size, will be useful further
    for(len = 0; str[len] != '\0'; ++len);
    
    for(int i = 0; i < len; ++i){
        if(str[i] == str[len-i-1]){
            continue;
        }
        else{
            cout << "Not a palindrome.";
            return 0;
        }
    }
    cout << "It is a palindrome!";
    return 0;
}