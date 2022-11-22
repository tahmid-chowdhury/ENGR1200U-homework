/* Tutorial 3: Expressions in C++
 * Program 1 by Tahmid Chowdhury
*/

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize our main three variables
	int a, b, c;
	// We used integers here because it seems unlikely for our user to input decimal numbers

	// Ask the user for our 3 numbers
	cout << "Enter your value for number 'a': ";
	cin >> a;
	cout << "\nEnter your value for number 'b': ";
	cin >> b;
	cout << "\nEnter your value for number 'c': ";
	cin >> c;
	cout << "\n";

	// Solve for our roots
	double x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	double x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	// We used doubles here just in case our equation returns a decimal value, since there is a square root and fraction involved

	// Print output
	cout << "Given (" << a << "x^2) + (" << b << ") + (" << c << ") = 0,\nThe roots are x = " << x1 << " and x = " << x2 << ".";

	return 0;
}