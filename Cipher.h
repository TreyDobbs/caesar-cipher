// --------------------------------------------------------------------------
// Name: Trey Dobbs
// Description: This C++ project implements a Caesar Cipher code where each 
// letter of a message is changed with the letter that is n (called
// the shift value) letters down from it in the standard alphabet. Default
// and overloaded constructors are the emphasis of this project.
// --------------------------------------------------------------------------
#ifndef CIPHER_H
#define CIPHER_H
#include <string>
using namespace std;

class caesarCipher
{
    private:
        int n;
    public:
        caesarCipher();
        caesarCipher(int n);
        string encrypt(string& s);
        string decrypt(string &s);
        void print();
};

#endif
