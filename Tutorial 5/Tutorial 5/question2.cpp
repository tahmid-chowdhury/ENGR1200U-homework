// Tutorial 5: Programming Practice in C++
// Question 2
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize variables for a and n
	int a, n;
	
	// Prompt the user to enter the balues of a and n
	cout << "Enter the value for a: ";
	cin >> a;
	cout << "Enter the value for n: ";
	cin >> n;

	// Calculate the sum using the formula provided
	// Note that we omitted 'd', since it does not matter for our case
	int sum = (n / 2) * (2 * a + (n - 1));

	// Print the final answer for sum
	cout << "\nThe sum of the integers from " << a << " to " << n << " is " << sum;

	return 0;
}