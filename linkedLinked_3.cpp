// C++ code to practice linked lists.

#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

node *head = NULL;

int main(){

    node n1 = {21, NULL};
    node n2 = {42, NULL};
    node n3 = {63, NULL};

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;

    node *current = head;
    while(current != NULL){
        cout << "current -> value: " << current -> data << endl;
        current = current -> next;
    }

    return 0;
}