// Carly Coccaro
// Lab 5.23
// 3/18/18

#include<iostream>
using namespace std;

int main() {

	int row = 5, n, i, top = row - 1, bottom = 1;

	// Top of Diamond
	for (i = 1; i <= row; i++) { // Top Row Loop: loops until row = 5.
		for (n = 1; n <= top; n++) // Space Loop: starting with 4 and looping down.
			cout << " "; // Print appropriate # of spaces.
		top--;

		for (n = 1; n <= 2 * i - 1; n++) // Star Loop: starting with 1 and increasing each row.
			cout << "*"; // Print appropriate # of stars.
		cout << "\n"; // Move to next row.
	}

	// Bottom of Diamond
	for (i = 1; i <= row - 1; i++) { // Bottom Row Loop: starts at row = 4 and loops until row = 0.
		for (n = 1; n <= bottom; n++) // Space Loop: starting with 1 and looping up.
			cout << " "; // Prints appropriate # of spaces.
		bottom++;

		for (n = 1; n <= 2 * (row - i) - 1; n++) // Star Loop: starting with 7 stars and decreasing each row.
			cout << "*"; // Print appropriate # of stars
		cout << "\n"; // Move to next row.
	}
}