// C++ code to manipulate a string as one's will.

#include <iostream>
using namespace std;

int main(){
    system("cls");
    char arr[100];
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int size = s.size();

    for(int i = 0; i < size; ++i){
        if((s[i] > 96 && s[i] < 123) || (s[i] > 47 && s[i] < 58)){
            arr[i] = s[i];
        }
        else if (s[i] < 91 && s[i] > 64){
            arr[i] = s[i] + 32;
        }
    }
    
    cout << "1st output: ";
    for(int i = 0; i < size; ++i){
        cout << arr[i];
    }
    cout << "\n2nd output: ";
    for(int i = size - 1; i > -1; --i){
        cout << arr[i];
    }

    return 0;
}