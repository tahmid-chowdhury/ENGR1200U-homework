/* Tutorial 3: Expressions in C++
 * Program 2 by Tahmid Chowdhury
*/

// Import required libraries
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize our main two variables
	double s, r;
	// We used doubles here since we are dealing with the radius, which could be a decimal number

	// Ask the user for our 2 numbers
	cout << "Enter your value for the surface of the cylinder 's': ";
	cin >> s;
	cout << "\nEnter your value for the radius of the cylinder 'r': ";
	cin >> r;
	cout << "\n";

	// Solve for our height
	double h = abs((s - 2 * M_PI * pow(r, 2)) / (2 * M_PI * r));
	// We used a double here just in case our equation returns a decimal value, since our radius is also assumed to be a decimal value, and we're dealing with pi

	// Print output
	cout << "Given a surface of " << s << " and a radius of " << r << ",\nThe height of the cylinder is " << h << ".";

	return 0;
}