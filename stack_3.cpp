#include <iostream>
using namespace std;

int main(){
    cout << "Enter formula: ";
    string formula;
    getline(cin, formula);
    int c1 = 0, c2 = 0;
    for(char ch : formula){
        if(ch == ')'){
            ++c1;
        }
        else if(ch == '('){
            ++c2;
        }
        else{
            continue;
        }
    }
    if(c1 == c2){
        cout << "Paranthesis are consistent.";
    }else{
        cout << "Paranthesis are not consistent!";
    }
    return 0;
}