// Swap two variables values using pointers. Extra = Functions!

#include <iostream>
using namespace std;

void swap(int x, int y);

int main(){
    int x, y;
    
    cout << "Enter x and y= ";
    cin >> x >> y;
    system("cls");
    swap(x, y); //Function swaps and prints the result
    
    return 0;
}

void swap(int x, int y){
    cout << "Before swap= " << "x = " << x << ", y= " << y << endl; //Values of x and y
    
    int *p1 = &x; //p1 = Address of x
    int *p2 = &y; //p2 = Address of y

    int *temp = p2; //Pointer "temp" holds the address of y via "p2"
    p2 = p1; // y's address is now equal to x's address 
    p1 = temp; // x's addres is equal to y's addres via "temp"  
    
    cout << "After swap= " << "x = " << *p1 << ", y= " << *p2 << endl; // Values of x and y
}