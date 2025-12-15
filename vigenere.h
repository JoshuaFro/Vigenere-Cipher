#ifndef VIGENERE_H
#define VIGENERE_H

#include <string>
#include <vector>

// Input and validation
void user_input(std::string &message, std::string &keyword, std::string &option);
bool input_Validation(std::string &text);

// Key and conversions
std::string generate_key(const std::string &message, const std::string &keyword);
std::vector<int> stringToNumbers(const std::string &text);

// Cipher logic
std::string vigenere_cipher(const std::string &message, const std::string &key, const std::string &option);

#endif

