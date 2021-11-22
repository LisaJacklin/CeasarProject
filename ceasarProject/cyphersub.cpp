//cyphersub.cpp
//Lisa Jacklin
//CS 201
//11/12/2021

#include <iostream>
#include <sstream>
#include <vector>
#include <istream>

//encrypts a message given char ( what to encrypt) and int ( the shift amount)
void msgEncrypt(char, int) {

	char message[100], ch;
	int i, key;

	std::cout << "please enter a message to encrypt: ";
	std::cin.getline(message, 100);

    std::cout << "Enter key: ";
    std::cin >> key;
 
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