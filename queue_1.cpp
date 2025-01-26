#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<char> qu;

    qu.push('a');
    qu.push('b');
    qu.push('c');

    cout << "Front element: " << qu.front() << endl;
    cout << "Back element: " << qu.back() << endl;

    qu.pop();

    cout << "Front element after pop: " << qu.front() << endl;
    cout << "Back element after pop: " << qu.back() << endl;

    if(!qu.empty()){
        cout << "Queue is not empty." << endl;
    }

    return 0;
}