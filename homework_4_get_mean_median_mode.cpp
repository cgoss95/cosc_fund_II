#include <iostream>
#include <string>
using namespace std;


// Function getMean takes a sorted array and its size and outputs the mean from all the elements in the array.
float getMean(int array[], int arraySize)
{
	// Initialize sum and get number of elements in array.
	int sum = 0;
	int numOfElements = arraySize;

	// Cycle through array to get sum of all elements.
	for (int n = 0; n < numOfElements; n++)
	{
		sum = sum + array[n];
	}

	// Get mean and return it.
	float mean = ((float)sum)/((float)numOfElements);

	// Returns the mean.
	return mean;

}

// Function getMedian takes a sorted array and its size and outputs the median from all the elements in the array.
float getMedian(int array[], int arraySize)
{
	int numOfElements = arraySize;
	float median = 0;
	int elementUsed;

	// If number of elements in array is odd, then use middle element for the median.
	if (numOfElements % 2 == 1)
	{
		elementUsed = (numOfElements / 2);
		median = array[elementUsed];
	}
	else if (numOfElements % 2 == 0)
	{

		// Divide the number of elements by 2 to get the lower number.
		elementUsed = (numOfElements / 2);

		// Add the element plus the next one then divide by two to average them.
		median = (float)(array[elementUsed - 1] + array[elementUsed]) / 2;
	}

	// Returns the median of the array.
	return median;
}

// Function getMode takes a sorted array and its size and outputs the mode from all the elements in the array.
float getMode(int array[], int arraySize)
{
	// Initialize variables.
	int highest = 0;
	int counter = 1;
	int mode = array[0];

	// Run through every element in the array.
	for (int n = 0; n < arraySize - 1; n++)
	{
		// If current element is equal to one in front of it, move to next part in counter.
		if (array[n] == array[n + 1])
		{
			counter++;
			if (counter > highest) {
				highest = counter;
				mode = array[n];
			}
			else counter = 1;
		}
	}
	return mode;
}

// Function bubbleSort takes an array and its array's length and sorts it from smallest to highest.
void bubbleSort(int array[], int length)
{
	for (int j = 0; j < length - 1; j++)
	{
		for (int n = 0; n < length - 1; n++)
		{
			// If current element is larger than element ahead of it, swap.
			if (array[n] > array[n + 1])
			{
				// Temp variable to hold onto while swapping is taking place.
				int temp = array[n + 1];

				// Swap current element with element before it.
				array[n + 1] = array[n];
				array[n] = temp;

			}
		}
	}
}



// **Don't forget the pointer variables change what it's pointing to.**

// Main function.
int main()
{

	// Initialize variables.
	int numStudents;
	int userInput;
	int * studentsAnswers;

	// Get input from the user.
	cout << "Enter the number of students." << endl;
	cin >> numStudents;

	// Create dynamically allocated array with the number of elements equal to the number of students.
	studentsAnswers = new int[numStudents];

	// Create 'for' loop that runs for the amount of times equal to the number of students.
	// Purpose is to go through each element in array and store the number of movies each student has seen.
	for (int n = 0; n < numStudents; n++)
	{
		// Get user input to see how many movies each student has seen.		
		cout << "How many movies has student " << n + 1 << " seen?" << endl;
		cin >> userInput;

		// Store user data into each element.
		studentsAnswers[n] = userInput;

	}


	bubbleSort(studentsAnswers, numStudents);
	float mean = getMean(studentsAnswers, numStudents);
	float median = getMedian(studentsAnswers, numStudents);
	float mode = getMode(studentsAnswers, numStudents);

	cout << "This is the mean: " << mean << endl;
	cout << "This is the median: " << median << endl;
	cout << "This is the mode: " << mode << endl;

	cout << "Press enter to exit." << endl;
	cin >> userInput;

	// Delete the array to clear up memory.
	delete[] studentsAnswers;

	// Return 0.
	return 0;
}



