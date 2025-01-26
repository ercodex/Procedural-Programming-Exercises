// Create, initialize, and use pointers.
#include <iostream>
using namespace std;

int main(){
    int x = 42;
    char letter = 'e';
    string message = "This guy";
    float weight = 68.3;
    double score = 72.59;

    cout << x << endl;
    cout << letter << endl;
    cout << message << endl;
    cout << weight << endl;
    cout << score << endl;

    int *p1 = &x;
    char *p2 = &letter;
    string *p3 = &message;
    float *p4 = &weight;
    double *p5 =  &score;
    
    cout << "------------------------------------" << endl;
    cout << "Values with pointer= " << *p1 << endl;
    cout << "Values with pointer= " << *p2 << endl;
    cout << "Values with pointer= " << *p3 << endl;
    cout << "Values with pointer= " << *p4 << endl;
    cout << "Values with pointer= " << *p5 << endl;

    cout << "------------------------------------" << endl;
    cout << "Values of pointers= " << p1 << endl;
    cout << "Values of pointers= " << p2 << endl; // What the????
    cout << "Values of pointers= " << p3 << endl;
    cout << "Values of pointers= " << p4 << endl;
    cout << "Values of pointers= " << p5 << endl;
    
    cout << "------------------------------------" << endl;
    cout << "Addresses of pointers= " << &p1 << endl;
    cout << "Addresses of pointers= " << &p2 << endl;
    cout << "Addresses of pointers= " << &p3 << endl;
    cout << "Addresses of pointers= " << &p4 << endl;
    cout << "Addresses of pointers= " << &p5 << endl;
    
    return 0;
}