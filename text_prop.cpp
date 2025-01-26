// This program shows the properties of a text.

#include <iostream>
using namespace std;

int main(){
    string text;

    cout << "Enter a sequence of text: ";
    getline (cin, text);
    cout << text << endl;
    int vowels = 0, spaces = 0, numbers = 0;

    for(int i = 0; i < text.size(); ++i){
        if(text[i] > 64 && text[i] < 91){
            ++vowels;
        }
        else if(text[i] == ' '){
            ++spaces;
        }
    }
    system("cls");
    cout << text << endl;
    cout << "Properties of this text" << endl;
    cout << "-----------------------" << endl;
    
    cout << "Text length: " << text.size() - spaces << endl;
    
    cout << "Number of vowel characters: " << vowels <<  endl;
    
    cout << "Number of consonant characters: " << text.size() - vowels - spaces - numbers << endl;
    
    cout << "Number of spaces: " << spaces << endl;
    
    cout << "Number of numbers: " << numbers << endl;
    
    cout << "Number of curse words: " << endl;
    cout << "Longest word is: " << endl; // substr ile alt stringlere ayırıp bulabilirsin.
    cout << "Lucky word is: " << endl;
    cout << "Randomly combined 2 words: " << endl;

    return 0;
}