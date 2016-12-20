// Program by Cecilia Goss

#include <iostream> // <<, >>, cin, cout
#include <string> // C++ string class
#include <cstring> // strlen
using namespace std;

// Function to get word count from a c string.
int getWordCount(const char *c_string)
{

	// Counter variable to iterate through c string, and word count.
	size_t i;
	int wordCount = 0;

	// Loop to go through string.
	for (i = 0; i < strlen(c_string); i++)
	{
		// If there is a whitespace or the end of the string, then wordCount is incremented.
		if (c_string[i] == ' ' || c_string[i + 1] == '\0')
		{
			wordCount++;
		}

	}

	// Returns an int.
	return wordCount;
}


// Main function.
int main()
{
	// Initialize string.
	string str;

	// Get input from the user for a string and 
	cout << "Please enter a string of characters and I will count the number of words." << endl;
	getline(cin, str);

	// Configure c string.
	const char *userInput = str.c_str();

	// Call getWordCount function
	int wordCount = getWordCount(userInput);

	// Display the word count to the screen.
	cout << "The number of words is " << wordCount << "." << endl;

	// Keep window open until key is pressed.
	char empty;
	cin >> empty;

	return 0;
}