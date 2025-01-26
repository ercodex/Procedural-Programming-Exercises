// C++ program to count vowel characters in a string.

#include <iostream>
using namespace std;

int main(){
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    string str;
    cout << "Enter string (lowercase only): ";
    cin >> str;
    int ctr = 0;

    for(int i = 0; str[i] != '\0'; ++i){
        for(int j = 0; j < 5; ++j){
            if(str[i] == vowels[j]){
                ++ctr;
            }
        }
    }

    cout << "String '" << str << "' contains " << ctr << " vowel characters.";
    return 0;
}