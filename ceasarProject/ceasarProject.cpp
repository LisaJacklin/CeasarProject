// ceasarProject.cpp 
// Lisa Jacklin
// 11/8/2021
// CS 201
//

#include <iostream>
using std::cin;
using std::cout;

//this gives the user the options for my project. 
//It displays two options as well as the choice to close out.
void menu(int& option);

//This is where the choices come into play
//this will refer to the decription and encryption
//also has built in closer when zero is entered
void choice(int& option);

char encrypt(char message[1000], int key);

char decryption(char message[1000], int key);

int main()
{
	cout << "----------------------CEASAR PROJECT------------------\n";
	int option;

	menu(option);
}

void menu(int & option) {
	cout << "Please Select an Option: \n ";
	cout << "1. Enryption\n";
	cout << "2. Decryption\n";
	cout << "3. Guess the key\n";
	cout << "0. Close out\n";

	cin >> option;

	choice(option);
}

void choice(int & option) {

	for (int i = 0; option > 0; i++) {
		if (option == 1) {
			cout << "You have choosen: ENCRYPTION\n";

			//creates a character array? with a max of 100 characters as well as character ch
			//which is the separation of the whatever message was given.
			char message[1000];
			int  key;

			cout << "please enter a message to encrypt: ";
			cin >> message;
			cout << "Enter key: ";
			cin >> key;

			encrypt(message, key);


			cout << " \n What would you like to do next?";
			cin >> option;
		}

		else if (option == 2) {
			cout << "You have choosen: DECRYPTION\n";

			char message[1000];
			int key;

			cout << "Enter a message to decrypt: ";
			cin >> message;
			cout << "Enter key: ";
			cin >> key;
			 
			decryption(message, key);

			cout << "\nWhat would you like to do next?";
			cin >> option;
		}
		else if (option == 3) {
			char message[1000] = "iuxxkiz";
			int key = 6;
			int guess;

			cout << "Guess the Key for the word: " << message << "\n";
			cout << "key: ";
			cin >> guess;

			if (guess != key) {
				cout << "try again!\n key: ";
				cin >> guess;
			}
			else {
				cout << "You guessed the correct key!\n";
				cout << "\nWhat would you like to do next?";
				cin >> option;
			}
		}
	}

	  if (option == 0) {
			//if the user enters 0, the program will simply close out.
			cout << "Press ENTER to quit ";
			while (cin.get() != '\n');
	}
	  //if option is greater than the value of options!!! 
	  //helps prevent crashes and other issues.
	 else  {
			cout << "\nplease enter a valid option\n";
			cin >> option;
	}
}

char encrypt(char message[1000], int key) {

	char ch;
	int i;
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
	cout << "encrypted message: " << message;
	return message[1000];
}

char decryption(char message[1000], int key) {
	int i;
	char ch;
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
	//prints the decrypted or encrypted message as well as what to do next 
	cout << "Decrypted message: " << message;
	return message[1000];
}