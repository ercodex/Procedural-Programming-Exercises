#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter string: ";
    getline(cin, input);

    stack<char> charStack;
    for (char ch : input) { // "input" içindeki her bir karaker sırasıyla "ch" değişkenine atanır.
        charStack.push(ch);
    }

    cout << "Reversed string: ";
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }
    cout << endl;

    return 0;
}