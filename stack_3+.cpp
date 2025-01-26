#include <iostream>
#include <stack>
// (a * b) - (c + 5
using namespace std;

bool isBalanced(const string& expression) {
    stack<char> charStack;
    for (char ch : expression) {
        
        if (ch == '(') {
            charStack.push(ch);
        } 
        else if (ch == ')') {
            if (charStack.empty() || charStack.top() != '(') {
                return false;
            }
            charStack.pop();
        }
    }
    return charStack.empty();
}

int main() {
    string expression;
    cout << "Parantezleri girin: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "Parantezler dogru eslesiyor." << endl;
    } else {
        cout << "Parantezler dogru eslesmiyor." << endl;
    }

    return 0;
}
