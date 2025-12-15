#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "vigenere.h"
using namespace std;


int main()
{
    string message, keyword, option;

    user_input(message, keyword, option);

    // Convert letters to uppercase
    for (char &c : message) c = toupper(c);
    for (char &c : keyword) c = toupper(c);

    // Generate a repeated key matching the message length
    string repeatedKey = generate_key(message, keyword);

    // Encrypt or decrypt the message
    string result = vigenere_cipher(message, repeatedKey, option);

    cout << "\nResult: " << result << endl;

    return 0;
}




/* NOTE FOR LINES 21 - 22
 Initializes the varible 'c' with a reference to a character
 from the string (message/keyword). It then converts the character
 to uppercase before looping back around and doing the same with the
 following character. This updates the variables (message/keyword)
 to their uppercase versions.
*/
