// ceasarProject.cpp 
// Lisa Jacklin
// 11/8/2021
// CS 201
//

#include <iostream>
#include "cyphersub.hpp"

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

	//What happens when each of these is used?
	//Each one should call the correct functions  
	//TO DO: each option should have a way to say hey, do you want to continue?

	if (option = 1){
		encrypt == true;
	}
	if (option = 2) {
		decrypt == true;
	}
	if (option = 0) {
		return 0;
		//TO DO : make sure this goes to press anything to exit
	}

}