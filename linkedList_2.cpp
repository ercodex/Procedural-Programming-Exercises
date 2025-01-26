// C++ code to practice linked lists.

#include <iostream>
using namespace std;

// Defining nodes
struct Node{
    int data;       // Holds data
    Node* next;     // Pointer that points to next node
};

int main(){
    int numNodes = 10; // Number of nodes

    // Creating the first node and name it as head
    Node *head = new Node();
    head->data = 1;
    head->next = nullptr;

    // A pointer to track the last node
    Node *current = head;

    // Creating the remaining nodes
    for (int i = 2; i <= numNodes; ++i){
        Node *newNode = new Node();
        newNode->data = i;
        newNode->next = nullptr;

        current->next = newNode; // Set the current node's next pointer to the new node
        current = newNode;       // Move the current pointer to the new node
    }

    // Printing the list
    current = head;
    while (current != nullptr){
        cout << current->data << endl;
        current = current->next;
    }
    cout << endl;

    // Deleting the nodes to free memory
    current = head;
    while (current != nullptr){
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
