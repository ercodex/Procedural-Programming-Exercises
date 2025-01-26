// C++ code to practice file operations.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char name[100];
    fstream text;
    text.open("eren.txt", ios::out); // Opened in write mod.

    if(text.fail()){
        cout << "Error opening file!" << endl;
        return 1;  // Return a non-zero value to indicate failure
    }

    cout << "File opened successfully." << endl;
    text << "Eren\nErdem\nHamza\n";
    text.close();
    cout << "Done!" << endl;
    
    // Check if the file was created and can be opened again
    text.open("eren.txt", ios::in);
    if (text.is_open()) {
        cout << "File created and verified successfully." << endl;
        text.close();
    } else {
        cout << "Error verifying the file!" << endl;
    }

    //Let's append some text to our file

    text.open("eren.txt", ios::app); // Append mode
    text << "Mustafa\nTarik";
    text.close();

    //Let's read from our file
    cout << "Reading from file" << endl;
    text.open("eren.txt", ios::in);
    for(int i = 0; i < 5; ++i){
        text >> name;
        cout << name << endl;
    }

    text.close();
    return 0;
}