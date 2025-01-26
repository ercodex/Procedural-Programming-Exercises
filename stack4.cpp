#include <iostream>
#include <stack>
#include <unordered_set>
#include <string>

using namespace std;

void findDuplicates(const string& input) {
    unordered_set<char> seenChars;
    stack<char> duplicateStack;

    for (char ch : input) {
        if (seenChars.count(ch) > 0) {
            duplicateStack.push(ch);
        } else {
            seenChars.insert(ch);
        }
    }

    cout << "Tekrar eden karakterler: ";
    while (!duplicateStack.empty()) {
        cout << duplicateStack.top() << " ";
        duplicateStack.pop();
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Metni girin: ";
    getline(cin, input);

    findDuplicates(input);

    return 0;
}
