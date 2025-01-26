// C++ program to delete vowel characters in a string

#include <iostream>
using namespace std;

int main(){
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    string str;
    cout << "Enter string (lowercase only): ";
    cin >> str;
    int ctr = 0;
    for(int i = 0; str[i] != '\0'; ++i) ++ctr;

    for(int i = 0; i < ctr; ++i){
        for(int j = 0; j < 5; ++j){
            if(str[i] == vowels[j]){
                str[i] = '\0';
            }
        }
    }
    cout << "String after procedure: " << str;
    return 0;
}