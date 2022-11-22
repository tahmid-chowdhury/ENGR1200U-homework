// Tutorial 6: Control Structures in C++
// Question 2
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Declare all required variables
	double x;
	char askLoop;


	// Open infinitely running while loop
	while (1) {
		// Ask the user for a value of x
		cout << "Enter a value for x: ";
		cin >> x;

		// Calculate the f(x) value and output it
		if (x <= 0) {
			cout << "f(x) = " << pow(2, -3 * x) << endl;
		}
		else {
			cout << "f(x) = " << log(x) + 10 << endl;
		}

		// Open infinitely running while loop
		while (1) {
			// Ask the user whether they want to run the program again
			cout << "Calculate the result of another function? (Enter 'Y' for yes and 'N' for no): ";
			cin >> askLoop;

			// If input makes sense, break loop
			if (askLoop == 'Y' || askLoop == 'y' || askLoop == 'N' || askLoop == 'n') {
				break;
			}
			// If it doesn't, run the loop again
			else {
				cout << "Invalid input." << endl;
			}
		}

		// If user is done with the program, break loop
		if (askLoop == 'N' || askLoop == 'n') {
			cout << "Thank you for using my program";
			break;
		}
	}

	// End program
	return 0;
}