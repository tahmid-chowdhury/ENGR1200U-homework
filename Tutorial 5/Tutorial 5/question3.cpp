// Tutorial 5: Programming Practice in C++
// Question 3
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize variables and give them their respective values
	double I = 10.67;
	double c = 2;
	double S = 3000;
	double d = 12 * 8.0;

	// Compute the maximum load in lbs
	double L = (S * I) / (d * c);

	// Output the final answer for (3a)
	cout << "Given the information provided, the maximum load in lbs is " << L;

	// Output the final answer for (3b)
	I = (3 * pow(6, 3)) / 12;
	L = (S * I) / (d * c);
	cout << "\nGiven the information provided, the maximum load in lbs is " << L;

	return 0;
}