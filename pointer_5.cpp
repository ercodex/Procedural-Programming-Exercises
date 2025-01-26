// Swap two variables values using pointers

#include <iostream>
using namespace std;

int main(){
    int x = 42, y = 314;
    int *p1 = &x; //p1 = Address of x
    int *p2 = &y; //p2 = Address of y
    
    cout << "Before swap= " << "x = " << *p1 << ", y= " << *p2 << endl; //Values of x and y
    
    cout << "Addresses of values before swap= \n" << "x = " 
    << p1 << ", y= " << p2 << endl; //Addresses of x and y
    
    int *temp = p2; //Pointer "temp" holds the address of y via "p2"
    p2 = p1; // y's address is now equal to x's address 
    p1 = temp; // x's addres is equal to y's addres via "temp" 

    cout << "------------"<< endl;
    
    cout << "After swap= " << "x = " << *p1 << ", y= " << *p2 << endl; // Values of x and y
    
    cout << "Addresses of values after swap= \n" << "x = " 
    << p1 << ", y= " << p2 << endl; //Addresses of x and y
    
    return 0;
}