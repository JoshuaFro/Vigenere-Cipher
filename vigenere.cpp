#include "vigenere.h"
#include <iostream>
#include <cctype>
#include <limits>

using namespace std;


// Ensures that the user input only contains letters
bool input_Validation(string &text)
{
    for (char c : text)
    {
        if (!isalpha(c))
            return false;
    }
    return true;
}


// Handles menu selection and user input
void user_input(string &message, string &keyword, string &option)
{
    int choice;

    cout << "Welcome, what would you like to do?\n";
    cout << "Encryption (1)\nDecryption (2)\nSelect (1 or 2): ";
    cin >> choice;

    while (choice != 1 && choice != 2)
    {
        cout << "Invalid option. Select (1 or 2): ";
        cin >> choice;
    }

    option = (choice == 1) ? "encrypt" : "decrypt";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter message (letters only): ";
    getline(cin, message);
    while (!input_Validation(message))
    {
        cout << "Invalid input. Letters only: ";
        getline(cin, message);
    }

    cout << "\nEnter keyword (letters only): ";
    getline(cin, keyword);
    while (!input_Validation(keyword))
    {
        cout << "Invalid input. Letters only: ";
        getline(cin, keyword);
    }
}


// Converts a string to numbers 0-25
vector<int> stringToNumbers(const string &text)
{
    vector<int> numbers;
    for (char c : text)
        numbers.push_back(c - 'A');
    return numbers;
}


// Generates a repeated key that matches the message length
string generate_key(const string &message, const string &keyword)
{
    string key;
    for (size_t i = 0; i < message.length(); i++)
        key += keyword[i % keyword.length()];
    return key;
}


// Applies the Vigenère cipher encryption or decryption
string vigenere_cipher(const string &message, const string &key, const string &option)
{
    vector<int> msgNums = stringToNumbers(message);
    vector<int> keyNums = stringToNumbers(key);

    string result;

    for (size_t i = 0; i < msgNums.size(); i++)
    {
        int value;
        if (option == "encrypt")
            value = (msgNums[i] + keyNums[i]) % 26;
        else
            value = (msgNums[i] - keyNums[i] + 26) % 26;

        result += char(value + 'A');
    }

    return result;
}





/* NOTE FOR LINE 41 and 49
 The return is true (correct)
 While its false that the return is correct,
 it will loop (meaning it will loop while the return is wrong)
 But since its true that the return is correct; It breaks out of the loop

 The return is false (wrong)
 While its true that the return is wrong,
 it will loop (meaning it will loop while the return is wrong)
 And since its true that the return is wrong the loop will continue
 
 In other words ...
 return = false, !return = true
 Is it true that the return is false. Yes, so the loop continues
 
 return = true, !return = false
 Is it false that the return is true. No, so the loop continues
*/

