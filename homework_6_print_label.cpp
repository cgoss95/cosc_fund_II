// Cecilia Goss

// Necessary header files.
#include <iostream> 
#include <string>
using namespace std;

// Creates class heading and includes appropriate methods and attributes.
class Heading
{
private:
	string companyName;
	string reportName;
	const int length = 40;
public:
	Heading(string companyName, string reportName);
	void printLabel();
};

// Constructor for class heading.
Heading::Heading(string companyName = "ABC Industries", string reportName = "Report")
{
	this->companyName = companyName;
	this->reportName = reportName;
}

// Prints out the report name and company name in a decorative manner.
void Heading::printLabel() {

	int emptySpaceLength = (length - companyName.length()) / 2;

	for (int n = 0; n <= length; n++) { // Create line with asterisks
		cout << "*";
	}

	cout << endl; // Create new line

	for (int n = 0; n <= length; n++) { // Create spaces and print company's name

		// Create spaces before and after company name
		if (n < emptySpaceLength || n > emptySpaceLength + companyName.length()) {
			cout << " ";
		}

		// Print out company name
		else if (n == emptySpaceLength) {
			cout << companyName;
		}
	}

	cout << endl; // Create new line.
	emptySpaceLength = (length - reportName.length()) / 2; // Empty space length is now based on how long the report name is.
	
	for (int n = 0; n <= length; n++) { // Create spaces and print report name.
		
		// Create spaces before and after the report's name.
		if (n < emptySpaceLength || n > emptySpaceLength + reportName.length()) {

			cout << " ";
		}
		else if (n > emptySpaceLength + reportName.length()) {
			cout << " ";
		}

		// Print out report's name.
		else if (n == emptySpaceLength) {
			cout << reportName;
		}
	}

	cout << endl; // Create new line.

	for (int n = 0; n <= length; n++) { // Create line with asterisks
		cout << "*";
	}

}

// Main function 
int main() {

	string companyName;
	string reportName;
	
	// Get user input
	cout << "What is the name of the company?" << endl;
	getline(cin, companyName);

	cout << "What is the name of the report?" << endl;
	getline(cin, reportName);

	Heading title = Heading(companyName, reportName);

	// Create class Heading and print to screen the heading.
	title.printLabel();

	// Keeps program window open
	char x;
	cin >> x;

	return 0;
}