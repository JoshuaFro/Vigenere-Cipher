# Vigenere-Cipher
Published: Dec 14, 2025

Hi, My name is Joshua and I am the sole programmer for this project.

To give a general description, this project is a simple Vigenere Cipher. It allows the user to either encrypt or decrypt a message using nothing more than a keyword. 

Programming Approach: This program was designed with clarity and structure in mind. I approached the Vigenere cipher by breaking the problem into smaller, manageable components rather than handling everything in a single function. User input, input validation, key generation, and encryption/decryption logic are all handled by separate functions, making the program easier to read, test, and maintain. 

The program works by first validating that the user’s message and keyword contain only alphabetic characters. Both inputs are then converted to uppercase to keep the cipher consistent. Each letter is mapped to a numerical value from 0–25, allowing modular arithmetic to be used for encryption and decryption. After applying the appropriate formula, the numerical results are converted back into letters to produce the final output.

How to Use the Program: First you run the program and select wether you want to encrypt or decrpt a message. From there you will enter your message and keyword using only letters (spaces arent allowed). The program will handle the rest and display the encrypted or decrypted message based on your selection.
