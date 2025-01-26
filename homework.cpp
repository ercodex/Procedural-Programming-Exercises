// A programming homework that manipulates a string.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int i, j, upper_ctr = 0, str_len, words = 0;

    cout << "Enter string: " << endl;
    getline(cin, str);
    str_len = str.length();

    for(i = 0; i < str_len; i++){
        if(i == 0 && islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(islower(str[i]) && str[i - 1] == ' '){
            str[i] = toupper(str[i]);
        }
        else if(str[i] == ' ' && str[i+1] != ' '){
            continue;
        }
    }

    cout << "Step one  :"<< str << endl;

    for(i = 0; i < str_len; i++){
        if(isupper(str[i])){
            str.insert(i+1, 1, str[i]);
            str_len++;
            i++;
        }
    }

    cout << "Step two  :" << str << endl;

    i = 0;
    while (i < str_len && str[i] == ' '){
        str.erase(i, 1);
        i++;
    }
    
    for (i = 0; i < str_len - 1; i++){
        if (str[i] == ' ' && str[i + 1] == ' '){
            str.erase(i, 1);
            str_len--;
            i--;
        }
    }

    cout << "Step three:" << str << endl;

    for(j = 0; j < 2; j++){
        for(i = 0; i < str_len; i++){
            if(isupper(str[i])){
            upper_ctr++;
            }
        }
    }

    for(i = 0; i < str_len; i++){
        if(str[i] == ' ' && isupper(str[i+1])){
            words++;
        }
    }

    cout << "Total number of vowels: " << upper_ctr/4 << endl;
    cout << "Total number of words: " << words << endl;
    return 0;
}