// ceasarProject.cpp 
// Lisa Jacklin
// 11/8/2021
// CS 201
//

#include <iostream>
#include "cyphersub.hpp"
//for random cypher
#include <random>

//Random Cypher

//Add an option to close out of the cypher



int main()
{
	std::cout << "----------------------CEASAR PROJECT------------------\n";
	
	bool encrypt, decrypt;
	int option;

	std::cout << "Please Select an Option: \n ";
	std::cout << "1. Enryption\n";
	std::cout << "2. Decryption\n";
	std::cout << "0. Close out\n";
	
	std::cin >> option;

	while (option = 1) {
		std::cout << "----------------------CEASAR PROJECT------------------\n";
		std::cout << "You have choosen: ENCRYPTION\n";

		//creates a character array? with a max of 100 characters as well as character ch
	 //which is the separation of the whatever message was given.
		char message[100], ch;
		int i, key;

		std::cout << "please enter a message to encrypt: ";
		std::cin >> message;
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
	while (option = 2) {
		std::cout << "----------------------CEASAR PROJECT------------------\n";
		std::cout << "You have choosen: DECRYPTION\n";

		char message[100], ch;
		int i, key;

		std::cout << "Enter a message to decrypt: ";
		std::cin >> message;
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
	while(option = 0) {

		//if the user enters 0, the program will simply close out.
		std::cout << "Press ENTER to quit ";
		while (std::cin.get() != '\n');
	}

}