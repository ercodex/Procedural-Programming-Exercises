// C++ code to practice linked lists.

#include <iostream>
using namespace std;

struct Node
{
    int value;
    struct Node *next;
};

Node *head = NULL;

int main(){
    Node s1 = {5, NULL};
    Node s2 = {10, NULL};
    Node s3 = {15, NULL};
    Node s4 = {20, NULL};
    Node s5 = {25, NULL};
    
    head = &s1;
    s1.next = &s2;
    s2.next = &s3;
    s3.next = &s4;
    s4.next = &s5;
    
    Node *current = head;
    while(current != NULL){
        cout << "current -> value: " << current -> value << endl;
        current = current -> next;
    }

    return 0;
}