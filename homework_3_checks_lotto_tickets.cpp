#include <iostream>
using namespace std;


// Main function.
int main() {

	// Initialize array and userInput.
	int array[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647};
	int userInput;
	
	// Ask for input from the user.
	cout << "Please enter a five-digit number for a chance to win the lottery:\n";
	cin >> userInput;
	// Check user's input to see if it is a five-digit number.
	// Also recreate program so it performs a binary search.

	// Iterate through each element in the array.
	for (int n; n <= sizeof(array); n++) {

		// Compare user's input to current element being considered within array.
		if (userInput == array[n]) {
			cout << "Congratulations! You have the winning number.";
			break;
		} 
		
		// If there is not a match at the end of the for loop, there is 
		else if (n == sizeof(array)) {
			cout << "Sorry, that is not the winning number.";
		}
	}
}