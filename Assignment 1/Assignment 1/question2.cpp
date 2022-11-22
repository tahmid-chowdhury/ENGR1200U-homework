// Assignment 1: Simple C++ Programs
// Question 2
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize all required variables
	int input;
	bool loop = true;
	string loopInput;
	// I set the y/n variable to a string this time in case the user enters another integer instead
	bool question1;
	bool question2;

	// Explain what the program does
	cout << "This program is designed to exhibit the positive divisors of postive integers supplied by you."
		<< "The program will repeatedly prompt you to enter a positive interger.Each time you enter a positive integer,"
		<< "the program will print all the divisors of your integer, the program will print all the divisors of your integer in a columnand in decreasing order.\n\n";

	// Start program as a while loop
	while (loop) {
		// Set bool variables to true
		question1 = true;
		question2 = true;

		// Start question asking as a while loop
		while (question1) {
			// Ask the user to input a positive integer
			cout << "Please enter a positive integer: ";
			cin >> input;

			// Check if the user input makes sense logically, if not then ask again
			if (input <= 0) {
				cout << "\n" << input << " is not a positive integer.\n";
			}

			// Print positive divisors
			else {
				for (int i = input; i > 0; i--) {
					if (input % i == 0) {
						cout << i << "\n";
					}
				}
				question1 = false;
			}
		}

		// Ask the user if they want to use the program again in a while loop
		while (question2) {
			// Ask the user for their input
			cout << "\nWould you like to see the divisors of another integer (Y/N)? ";
			cin >> loopInput;

			// Loop or end loop accordingly
			if (loopInput == "N" || loopInput == "n") {
				loop = false;
				question2 = false;
			}
			else if (loopInput == "Y" || loopInput == "y") {
				question2 = false;
			}
			else {
				cout << "Please respond with Y (or y) for yes and N (or n) for no.";
			}
		}
	}

	// End program
	return 0;
}