// Tutorial 8: Functions in C++
// Question 1
// Program by Tahmid Chowdhury

// Import required libraries
#include <iostream>

using namespace std;

string convertString(string input) {
	string output;
	int i = 0;
	char currentChar;

	while (currentChar != '\0') {
		if (input[i] >= 65 && input[i] <= 92) {
			convertCharDown(input[i]);
		}
		else if (input[i] >= 93 && input[i] <= 120) {
			convertCharUp(input[i]);
		}
		i++;
	}
}

char convertCharDown(char input) {
	char output = input + 32;
	return output;
}
char convertCharUp(char input) {
	char output = input - 32;
	return output;
}

// Main program
int main() {
	string userInput;

	cout << "Enter a string to convert uppercase letters to lowercase and lowercase letters to uppercase: ";
	cin >> userInput;

	cout << convertString(userInput);

	// Close main class
	return 0;
}