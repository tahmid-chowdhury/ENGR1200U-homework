// Tutorial 5: Programming Practice in C++
// Question 1
// Program by: Tahmid Chowdhury

// Import required libraries
#include <iostream>
#include <cmath>

using namespace std;

// Main program
int main() {
	// Initialize variables for base and height
	double base, height;
	
	// Prompt the user to enter the values for base and height in inches
	cout << "Enter the value for base in inches: ";
	cin >> base;
	cout << "Enter the value for height in inches: ";
	cin >> height;

	// Initialize area and set it equal to the formula for area
	double area = (base * height) / 2;

	// Print output
	cout << "\nGiven a base of " << base << " inches and a height of " << height << " inches, the area of the triangle is " << area;

	return 0;
}