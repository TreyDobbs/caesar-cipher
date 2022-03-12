# caesar-cipher

A Caesar Cipher is a code where each letter of a message is changed with the letter that is n (called the shift value) letters down from it in the standard alphabet. 
So, for instance, a Caesar Cipher with the shift value of 5 will look like this:

Standard: a b c d e f g h i j k l m n o p q r s t u v w x y z

Cipher: f g h i j k l m n o p q r s t u v w x y z a b c d e

So, the message "cakeinthebreakroom" (remove spaces before encrypting, use only lower-case letters) becomes: hfpjnsymjgwjfpwttr.

For this project a class called caesarCipher is created that has a private integer attribute that stores the shift value. 
The class has a default constructor that sets the shift value to 1 and an overloaded constructor that accepts a single integer parameter 
and sets the shift value to the value of the parameter.

The caesarCipher class has a member method called encrypt that accepts a string and returns the encrypted version as a string. 
Additionally, there is a method called decrypt which reverses this process; it accepts an encrypted string and returns the unencrypted
string. Finally, a print method is implemented that prints out the shift value and the cipher alphabet.
