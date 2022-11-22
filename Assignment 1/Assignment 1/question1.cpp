// Assignment 1: Simple C++ Programs
// Question 1
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize all required variables
	double r1, r2, r3, r4, r5, r6;
	bool loop = true;
	bool question;
	double equation;
	char loopInput;

	// Start program loop as a while loop
	while (loop) {
		// Set the condition of our second while loop to true
		question = true;

		// Ask the user for input and store them in r1 to r6
		cout << "Enter 6 resistance values to calculate whether they would result in a good or bad design: \n";
		cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;

		// Calculate the equation provided
		equation = ((r1 + r2) * r4 * r6) / ((r3 + r4) * r1 * r5);

		// Check if the values satisfy the equation and reply accordingly
		if (equation == 7.5) {
			cout << "Good Design values: ";
		}
		else {
			cout << "Bad Design values: ";
		}
		// Print out the values along with whether they are good or bad
		cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6;

		// Ask the user whether to run the program again using another while loop
		while (question) {
			cout << "\nRun program again? (Y/N): ";
			cin >> loopInput;
			if (loopInput == 'N' || loopInput == 'n') {
				loop = false;
				question = false;
			}
			else if (loopInput == 'Y' || loopInput == 'y') {
				question = false;
			}
			else {
				cout << "Incorrect input, try again.";
			}
		}
		
	}

	cout << "Thank you for using my program.";

	// End program
	return 0;
}