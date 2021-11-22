//cyphersub.cpp
//Lisa Jacklin
//CS 201
//11/12/2021

#include <iostream>
#include <sstream>
#include <vector>
#include <istream>

//encrypts a message given char ( what to encrypt) and int ( the shift amount)
//TO DO - ADJUST TO PASS BY REFERENCES 
//  OR CHANGE WHAT MSG ENCRYPT REQUIRES

void msgEncrypt(char , int) {

    //creates a character array? with a max of 100 characters as well as character ch
    //which is the separation of the whatever message was given.
	char message[100], ch;
	int i, key;

	std::cout << "please enter a message to encrypt: ";
	std::cin.getline(message, 100);

    std::cout << "Enter key: ";
    std::cin >> key;
 
     //now, with the amount of shift given by key, we can seaparate the message
    //and change each char to the new adjusted value.
    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch + key;
            if (ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + key;
            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    std::cout << "encrypted message: " << message;
}

//allows a message to be decrypted.
//TO DO - CHANGE WHAT THIS FUNCTION TAKES AS ARGUMENTS
void msgDecrypt(char, int) {

    char message[100], ch;
    int i, key;

    std::cout << "Enter a message to decrypt: ";
    std::cin.getline(message, 100);

    std::cout << "Enter key: ";
    std::cin >> key;


    for (i = 0; message[i] != '\0'; ++i) {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if (ch > 'a') {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
    std::cout << "Decrypted message: " << message;
}