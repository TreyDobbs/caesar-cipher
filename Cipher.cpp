// --------------------------------------------------------------------------
// Name: Trey Dobbs
// Description: This C++ project implements a Caesar Cipher code where each 
// letter of a message is changed with the letter that is n (called
// the shift value) letters down from it in the standard alphabet. Default
// and overloaded constructors are the emphasis of this project.
// --------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "Cipher.h"
using namespace std;

//---------------------------------------------------------------------------
/* Function name: caesarCipher 
   Function description: Default constructor that initializes the shift value
   to 1
   Input: N/A
   Output: N/A
   Return: N/A   
*/
caesarCipher::caesarCipher()
{
    n = 1;
}

//---------------------------------------------------------------------------
/* Function name: caesarCipher 
   Function description: Overloaded constructor that initializes the shift 
   value with the value passed to the function
   Input: n
   Output: N/A
   Return: N/A   
*/
caesarCipher::caesarCipher(int n)
{
    // shift value
    this -> n = n;
}


//---------------------------------------------------------------------------
/* Function name: encrypt 
   Function description: Encrypts the string
   Input: s
   Output: N/A
   Return: ret   
*/
string caesarCipher::encrypt(string& s)
{
    // Encrypted string
    string ret;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] != ' ')
        {
            // Convert to lower case
            if(s[i] >= 'A' && s[i]<='Z') s[i] -= ('A' - 'a');
            // Shift n letters ahead
            ret += ('a' + (s[i] + n - 'a') % 26);
        }
    }
    return ret;
}

//---------------------------------------------------------------------------
/* Function name: decrypt 
   Function description: Decrypts the string
   Input: s
   Output: N/A
   Return: ret   
*/
string caesarCipher::decrypt(string &s)
{
    string ret;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] != ' ')
        {
            // Convert to lower case
            if(s[i] > 'z') s[i] -= ('A' - 'a');
            // Shift n letters behind
            ret += ('a' + (s[i] - n + 26 - 'a') % 26);
        }
    }
    return ret;
}

//---------------------------------------------------------------------------
/* Function name: print 
   Function description: Prints both the shift value and the Caesar Cipher
   alphabet
   Input: N/A
   Output: void
   Return: N/A 
*/
void caesarCipher::print()
{
    cout << "The shift value is: " << n << endl;
    cout << "The cipher alphabet is: ";
    for(int i = 0;i < 26;i++)
    {
        cout << (char)('a' + (i + n) % 26);
    }
    cout << endl;
}
