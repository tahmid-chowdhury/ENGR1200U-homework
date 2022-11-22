// Tutorial 6: Control Structures in C++
// Question 1
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Declare all required variables
	char userInput;
	char askLoop;
	double price;
	string size;

	// Open infinitely running while loop
	while (1) {
		// Open infinitely running while loop
		while (1) {
			// Ask user for coffee size
			cout << "What size of coffee would you like to order? (Enter 'L' for large, 'M' for medium, and 'S' for small): ";
			cin >> userInput;

			// Check input and store price and size values accordingly, then break loop
			if (userInput == 'L' || userInput == 'l') {
				price = 5.99;
				size = "large";
				break;
			}
			else if (userInput == 'M' || userInput == 'm') {
				price = 4.99;
				size = "medium";
				break;
			}
			else if (userInput == 'S' || userInput == 's') {
				price = 3.99;
				size = "small";
				break;
			}
			// If input doesn't make sense, run loop again
			else {
				cout << "Please enter a valid character corresponding to the desired size." << endl;
			}
		}

		// Output size and cost of coffee
		cout << "Your " << size << " coffee will cost " << price << endl;

		// Open infinitely running while loop
		while (1) {
			// Ask the user whether they want to run the program again
			cout << "Order another coffee? (Enter 'Y' for yes and 'N' for no): ";
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