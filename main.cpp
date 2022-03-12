// --------------------------------------------------------------------------
// Name: Trey Dobbs
// Description: This C++ project implements a Caesar Cipher code where each 
// letter of a message is changed with the letter that is n (called
// the shift value) letters down from it in the standard alphabet. Default
// and overloaded constructors are the emphasis of this project.
// --------------------------------------------------------------------------
#include <iostream>
#include "Cipher.h"
using namespace std;

int main()
{
    // Shift value of 7
    caesarCipher shifter(7);
    // Print message of shift value of 7
    shifter.print();
    cout << endl << "Enter a string to encrypt. " << endl; 
    string userEntry;
    getline(cin,userEntry);
    // Encrypt
    cout << "Encrypted: " << shifter.encrypt(userEntry) << endl;
    cout << endl << "Enter a string to decrypt. " << endl;
    getline(cin,userEntry);
    // Decrypt
    cout << "Encrypted: " << shifter.decrypt(userEntry) << endl;
}
