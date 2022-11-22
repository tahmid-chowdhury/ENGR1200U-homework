// Tutorial 4: Output Formatting
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Declare integer variables
	int coffee, doughnuts;
	
	// Ask user to define integer variables
	cout << "How many Coffee and Doughnuts would you like to purchase?" << endl << "Coffee: ";
	cin >> coffee;
	cout << "Doughnuts: ";
	cin >> doughnuts;

	// Do all calculations
	float coffeePrice = coffee * 4.99;
	float doughnutsPrice = doughnuts * 1.99;
	float subtotal = coffeePrice + doughnutsPrice;
	float tax = subtotal * 0.13;
	float total = subtotal + tax;

	// Print receipt
	cout << fixed << setprecision(2) << endl
		<< "Jim Hortons" << endl
		<< "Customer Receipt" << endl
		<< "-------------------------" << endl
		<< "Coffee\t\tx" << coffee << "\t" << coffeePrice << endl
		<< "Doughnut\tx" << doughnuts << "\t" << doughnutsPrice << endl
		<< "\nSubtotal\t\t" << subtotal << endl
		<< "HST\t\t%13\t" <<  tax << endl
		<< "\nTotal\t\t\t" << total;

	// Close main class
	return 0;
}