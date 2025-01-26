// C++ programming quiz.

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void appendNode(Node*& head, int value) {
    if (head == nullptr) {
        head = createNode(value);
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = createNode(value);
    }
}

void printListRecursively(Node* head) {
    if (head == nullptr) {
        return;
    }
    cout << head->data << " ";
    printListRecursively(head->next);
}

int main() {
    Node* head = nullptr;
    int n, value;

    cout << "Eleman sayisini girin: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Eleman " << i + 1 << ": ";
        cin >> value;
        appendNode(head, value);
    }

    cout << "Liste elemanlari: ";
    printListRecursively(head);
    cout << endl;

    return 0;
}