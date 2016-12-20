// Cecilia Goss
#include <string>
#include <iostream>
using namespace std;

// Day of year class
class DayOfYear
{
private:
	int input;
	string output;
	string month;
public:
	DayOfYear(int);
	void print();
};

DayOfYear::DayOfYear(int input = 0) {
	this->input = input;
}

void DayOfYear::print() {
	int day;

	// Determine what day corresponds to which date.
	if (input == 0) {
		cout << "That is not a valid day";
	}
	else if (input > 0 && input <= 31) {
		month = "January";
		day = input;
	}
	else if (input >= 32 && input < 60) {
		month = "February";
		day = input - 31;
	}
	else if (input >= 60 && input < 91) {
		month = "March";
		day = input - 59;
	}
	else if (input >= 91 && input < 121) {
		month = "April";
		day = input - 90;
	}
	else if (input >= 121 && input < 152) {
		month = "May";
		day = input - 120;
	}
	else if (input >= 152 && input < 182) {
		month = "June";
		day = input - 151;
	}
	else if (input >= 182 && input < 213) {
		month = "July";
		day = input - 181;
	}
	else if (input >= 213 && input < 244) {
		month = "August";
		day = input - 212;
	}
	else if (input >= 244 && input < 274) {
		month = "September";
		day = input - 243;
	}
	else if (input >= 274 && input < 305) {
		month = "October";
		day = input - 273;
	}
	else if (input >= 305 && input < 335) {
		month = "November";
		day = input - 304;
	}
	else if (input >= 335 && input < 366) {
		month = "December";
		day = input - 334;
	}
	else {
		cout << "That is not a valid day.";
	}

	cout << month << " " << day;

}

int main()
{
	int userInput;

	// Get input from the user.
	cout << "Enter a number for a day and I will make a date out of it." << endl;
	cin >> userInput;

	// Create object day and print the date on the screen.
	DayOfYear day = DayOfYear(userInput);
	day.print();

	cin >> userInput;

	return 0;
}